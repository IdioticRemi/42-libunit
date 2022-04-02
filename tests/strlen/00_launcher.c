/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:38:30 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/02 14:43:58 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_strlen.h"

int	strlen_launcher(void)
{
	t_testlist	*tests;

	tests = 0;
	load_test(&tests, "Basic test", &basic_test, TRUE);
	load_test(&tests, "Null test", &null_test, TRUE);
	load_test(&tests, "Long test", &long_test, TRUE);
	return (launch_tests("strlen", &tests));
}
