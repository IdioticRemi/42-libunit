/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:38:30 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/02 13:28:55 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int	strlen_launcher(void)
{
	t_testlist	*tests;

	load_test(&tests, "Basic test", &basic_test, TRUE);
	load_test(&tests, "Null test", &null_test, TRUE);
	load_test(&tests, "Long test", &long_test, TRUE);
	return (launch_tests("strlen", &tests));
}

int	main()
{
	strlen_launcher();
}
