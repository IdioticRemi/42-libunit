/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_no_separator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 17:14:06 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_no_separator(void)
{
	char	**splitted;

	splitted = ft_split("aweufhwieuhfiwuehfiuhfidsufghqw87yqdkasdfkweoifj\newfiuwefhiwufh\tuhufhieuehifew\n", ' ');
	if (!ft_strncmp(splitted[0], "aweufhwieuhfiwuehfiuhfidsufghqw87yqdkasdfkweoifj\newfiuwefhiwufh\tuhufhieuehifew\n", 82))
		return (0);
	else
		return (-1);
}
