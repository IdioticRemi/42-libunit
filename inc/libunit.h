/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <tjolivea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:24:08 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/02 12:40:17 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/wait.h>

# define TRUE 1
# define FALSE 0

typedef struct s_testlist
{
	char				*name;
	int					(*test)(void);
	int					enabled;
	struct s_testlist	*next;
}	t_testlist;

void	*ft_xmalloc(int size);
void	load_test(t_testlist **h, char *n, int (*t)(void), int e);
void	putint(int x);
void	putstr(char *str);

#endif
