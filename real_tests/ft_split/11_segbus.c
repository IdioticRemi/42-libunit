/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_segbus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 17:55:07 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"
#include <signal.h>
#include <stdio.h>
#include <string.h>

int	split_sigbus(void)
{
	char	**splitted;
	char	*s;

	s = "test";
	s[0] = '0';
	splitted = ft_split("                   ", 1);
	if (!ft_strncmp(splitted[0], "", 0))
		return (0);
	else
		return (-1);
}
