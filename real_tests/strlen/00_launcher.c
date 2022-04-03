/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:38:30 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 15:41:58 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test_strlen.h"

int	strlen_launcher(void)
{
	t_testlist	*tests;

	tests = 0;
	load_test(&tests, "Basic test", &strlen_basic_test, TRUE);
	load_test(&tests, "Null test", &strlen_null_test, TRUE);
	load_test(&tests, "Long test", &strlen_long_test, TRUE);
	return (launch_tests("strlen", &tests));
}
