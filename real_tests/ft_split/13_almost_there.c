/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_almost_there.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 19:09:27 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_almost_there(void)
{
	char	**splitted;

	splitted = ft_split("This is the finAaaaAaal "
			"tEsTTT!NaAaAaAah, just kidding.", 'A');
	if (!ft_strncmp(splitted[0], "This is the fin", 15)
		&& !ft_strncmp(splitted[1], "aaa", 3)
		&& !ft_strncmp(splitted[2], "aal tEsTTT!Na", 13)
		&& !ft_strncmp(splitted[3], "a", 1)
		&& !ft_strncmp(splitted[4], "a", 1)
		&& !ft_strncmp(splitted[5], "ah, just kidding.", 17))
		return (0);
	else
		return (-1);
}
