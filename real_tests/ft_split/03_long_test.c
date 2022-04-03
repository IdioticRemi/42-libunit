/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_long_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 19:20:05 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_long_test(void)
{
	char	**splitted;

	splitted = ft_split("   Salut      "
			"             ca            "
			"         va                    "
			"   ?                   ", ' ');
	if (!ft_strncmp(splitted[0], "Salut", 5)
		&& !ft_strncmp(splitted[1], "ca", 2)
		&& !ft_strncmp(splitted[2], "va", 2)
		&& !ft_strncmp(splitted[3], "?", 1))
		return (0);
	else
		return (-1);
}
