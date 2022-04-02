/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <tjolivea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:42:58 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/02 12:47:19 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	print_test_result(char *name, char *testname, int status)
{
	putstr(name);
	putstr(": ");
	putstr(testname);
	putstr(": ");
	if (status == 0)
		putstr("\033[0;32m[ OK ]");
	else if (status == SIGSEGV)
		putstr("\033[0;35m[ SIGSEGV ]");
	else if (status == SIGBUS)
		putstr("\033[0;36m[ BUS ERROR ]");
	else
		putstr("\033[0;31m[ KO ]");
	putstr("\033[0;0m");
}

static void	print_total(char *name, int ok, int ko)
{
	putstr(name);
	putstr(": ");
	putint(ok);
	putstr(" tests out of ");
	putint(ko + ok);
	putstr(" were successful!");
}

static int	start_test(t_testlist *test)
{
	int	pid;
	int	status;

	pid = fork();
	if (pid < 0)
		return (-1);
	if (pid)
	{
		wait(&status);
		if (WIFSIGNALED(status))
			return (WTERMSIG(status));
		if (WIFEXITED(status))
			return (WEXITSTATUS(status));
		return (1);
	}
	exit(test->test());
}

int	launch_tests(char *name, t_testlist **testlist)
{
	t_testlist	*tmp;
	int			ok;
	int			ko;
	int			ret;

	if (!testlist)
		return (1);
	ok = 0;
	ko = 0;
	tmp = *testlist;
	while (tmp)
	{
		if (tmp->enabled)
		{
			ret = start_test(tmp);
			if (ret != 0)
				ko++;
			else
				ok++;
			print_test_result(name, tmp->name, ret);
		}
		tmp = tmp->next;
	}
	print_total(name, ok, ko);
	return ((ko > 0) * -1);
}