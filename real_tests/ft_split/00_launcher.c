/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:38:30 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 19:04:26 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_launcher(void)
{
	t_testlist	*tests;

	tests = 0;
	load_test(&tests, "Basic test", &split_basic_test, TRUE);
	load_test(&tests, "Null test", &split_null_test, TRUE);
	load_test(&tests, "Long test", &split_long_test, TRUE);
	load_test(&tests, "Short test", &split_short_test, TRUE);
	load_test(&tests, "Empty test", &split_empty_chain, TRUE);
	load_test(&tests, "No separator", &split_no_separator, TRUE);
	load_test(&tests, "Only separators", &split_only_separators, TRUE);
	load_test(&tests, "Non ascii", &split_non_ascii, TRUE);
	load_test(&tests, "Separators first", &split_separators_first, TRUE);
	load_test(&tests, "Test Segv", &split_segv, TRUE);
	load_test(&tests, "Test sigbus", &split_sigbus, TRUE);
	load_test(&tests, "More tests", &split_more_tests, TRUE);
	load_test(&tests, "Almost there", &split_almost_there, TRUE);
	load_test(&tests, "Way too long", &split_way_too_long, TRUE);
	load_test(&tests, "Null terminated", &split_null_terminated_string, TRUE);
	return (launch_tests("ft_split", &tests));
}
