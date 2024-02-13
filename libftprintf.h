/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasado- <ccasado-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:10:08 by ccasado-          #+#    #+#             */
/*   Updated: 2024/02/11 19:00:24 by ccasado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void		ft_putchar_va(char c, int *count);
void		ft_putstr_va(char *str, int *count);
size_t		ft_strlen(const char *str);
#endif
