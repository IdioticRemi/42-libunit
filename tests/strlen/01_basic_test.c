/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:37 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/02 14:43:35 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test_strlen.h"

int	basic_test(void)
{
	if (ft_strlen("Salut") == 5)
		return (0);
	else
		return (-1);
}