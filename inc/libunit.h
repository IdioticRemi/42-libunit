/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <tjolivea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:24:08 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/02 11:32:57 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# define TRUE 1
# define FALSE 0

typedef struct s_testlist
{
	char				*name;
	int					(*test)(void);
	int					enabled;
	struct s_testlist	*next;
}	t_testlist;

#endif
