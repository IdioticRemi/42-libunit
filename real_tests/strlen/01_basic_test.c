/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <tjolivea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:17:51 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/03 15:17:53 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test_strlen.h"

int	strlen_basic_test(void)
{
	if (ft_strlen("Salut") == 5)
		return (0);
	else
		return (-1);
}
