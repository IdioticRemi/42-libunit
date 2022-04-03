/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:07:34 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/03 19:02:44 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_SPLIT_H
# define TEST_SPLIT_H

# include "../../inc/libunit.h"

int	split_launcher(void);
int	split_basic_test(void);
int	split_null_test(void);
int	split_long_test(void);
int	split_short_test(void);
int	split_empty_chain(void);
int	split_no_separator(void);
int	split_only_separators(void);
int	split_non_ascii(void);
int	split_separators_first(void);
int	split_segv(void);
int	split_sigbus(void);
int	split_more_tests(void);
int	split_almost_there(void);
int	split_way_too_long(void);
int	split_null_terminated_string(void);

#endif
