/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sig.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <tjolivea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:18:29 by tjolivea          #+#    #+#             */
/*   Updated: 2022/04/03 19:22:21 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_SIG_H
# define TEST_SIG_H

# include "../../framework/inc/libunit.h"

int	sig_launcher(void);
int	sig_sigabrt_test(void);
int	sig_sigfpe_test(void);
int	sig_sigpipe_test(void);
int	sig_sigill_test(void);

#endif
