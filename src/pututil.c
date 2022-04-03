/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pututil.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:37:44 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/03 17:57:50 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	while (str && *str)
		putchar(*str++);
}

void	putint(int x)
{
	if (x >= 10)
		putint(x / 10);
	putchar('0' + x % 10);
}
