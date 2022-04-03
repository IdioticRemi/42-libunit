/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:52:23 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/03 19:42:19 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "real_tests/ft_split/test_split.h"
#include "real_tests/sig/test_sig.h"

int	main(void)
{
	split_launcher();
	sig_launcher();
	return (0);
}
