/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:17:51 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/03 16:47:07 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_basic_test(void)
{
	char	**splitted;

	splitted = ft_split("Salut ca va ?", ' ');
	if (!ft_strncmp(splitted[0], "Salut", 5)
		&& !ft_strncmp(splitted[1], "ca", 2)
		&& !ft_strncmp(splitted[2], "va", 2)
		&& !ft_strncmp(splitted[3], "?", 1))
		return (0);
	else
		return (-1);
}
