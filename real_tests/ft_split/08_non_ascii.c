/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_non_ascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 17:20:52 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_non_ascii(void)
{
	char	**splitted;

	splitted = ft_split("Salut ca va", (char)145);
	if (!ft_strncmp(splitted[0], "Salut ca va", 11))
		return (0);
	else
		return (-1);
}
