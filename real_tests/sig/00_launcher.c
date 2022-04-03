/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <tjolivea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:18:08 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/03 19:42:50 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test_sig.h"

int	sig_launcher(void)
{
	t_testlist	*tests;

	tests = 0;
	load_test(&tests, "SIGABRT test", &sig_sigabrt_test, TRUE);
	load_test(&tests, "SIGFPE test", &sig_sigfpe_test, TRUE);
	load_test(&tests, "SIGPIPE test", &sig_sigpipe_test, TRUE);
	load_test(&tests, "SIGILL test", &sig_sigill_test, TRUE);
	load_test(&tests, "TIMEOUT test", &sig_timeout_test, TRUE);
	return (launch_tests("signal", &tests));
}
