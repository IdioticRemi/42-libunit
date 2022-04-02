/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:24:08 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/02 12:06:07 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# define TRUE 1
# define FALSE 0

# include <sys/wait.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_testlist
{
	char				*name;
	int					(*test)(void);
	int					enabled;
	struct s_testlist	*next;
}	t_testlist;

void	*ft_xmalloc(int size);
void	load_test(t_testlist **head, char *name,
			int (*test)(void), int enabled);

#endif
