/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_long_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/02 14:43:35 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test_strlen.h"

int	strlen_long_test(void)
{
	if (ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") == 50)
		return (0);
	else
		return (-1);
}
