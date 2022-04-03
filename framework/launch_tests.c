/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:42:58 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/03 20:12:38 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	print_test_result(char *name, char *testname, int status)
{
	putstr(name);
	putstr(": ");
	putstr(testname);
	putstr(": ");
	putstr("\033[40G");
	if (status == 0)
		putstr("\033[1;32m[ OK ]");
	else if (status == SIGBUS)
		putstr("\033[1;33m[ SIGBUS ]");
	else if (status == SIGSEGV)
		putstr("\033[1;33m[ SIGSEGV ]");
	else if (status == SIGABRT)
		putstr("\033[1;33m[ SIGABRT ]");
	else if (status == SIGFPE)
		putstr("\033[1;33m[ SIGFPE ]");
	else if (status == SIGPIPE)
		putstr("\033[40G\033[1;33m[ SIGPIPE ]");
	else if (status == SIGILL)
		putstr("\033[1;33m[ SIGILL ]");
	else if (status == SIGALRM)
		putstr("\033[1;34m[ TIMEOUT ]");
	else
		putstr("\033[1;31m[ KO ]");
	putstr("\033[0;0m\n");
}

static void	print_total(char *name, int ok, int ko)
{
	putstr("\n");
	putstr("\033[1m");
	putstr(name);
	putstr(": ");
	if (ko == 0)
		putstr("\033[1;32m");
	else if (ok == 0)
		putstr("\033[1;31m");
	else
		putstr("\033[1;33m");
	putint(ok);
	putstr("\033[0;0m");
	putstr("\033[1m");
	putstr(" tests out of ");
	putstr("\033[1;36m");
	putint(ko + ok);
	putstr("\033[0;0m");
	putstr("\033[1m");
	putstr(" were successful!\n\n");
	putstr("\033[0;0m");
}

static int	free_tests(t_testlist **testlist, int ret)
{
	t_testlist	*test;
	t_testlist	*tmp;

	test = *testlist;
	while (test)
	{
		tmp = test;
		test = test->next;
		free(tmp);
	}
	return (ret);
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
	alarm(1);
	exit(test->test());
}

int	launch_tests(char *name, t_testlist **testlist)
{
	t_testlist	*tmp;
	int			ok;
	int			ko;
	int			ret;

	if (!testlist)
		return (-1);
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
	return (free_tests(testlist, (ko > 0) * -1));
}
