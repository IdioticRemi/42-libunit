/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_more_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 19:09:53 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_more_tests(void)
{
	char	**splitted;

	splitted = ft_split("This is a cool test."
			"\tMaybe it's gonna work.\tMaybe.", '\t');
	if (!ft_strncmp(splitted[0], "This is a cool test.", 20)
		&& !ft_strncmp(splitted[1], "Maybe it's gonna work.", 22)
		&& !ft_strncmp(splitted[2], "Maybe.", 6))
		return (0);
	else
		return (-1);
}
