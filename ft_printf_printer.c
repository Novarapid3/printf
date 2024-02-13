/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasado- <ccasado-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:09:03 by ccasado-          #+#    #+#             */
/*   Updated: 2024/02/13 22:09:06 by ccasado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar_va(char c, int *count)
{
	int	error_check;

	error_check = write(1, &c, 1);
	if (error_check == -1)
		*count = -1;
	else
		*count = *count + 1;
}

void	ft_putstr_va(char *str, int *count)
{
	int	i;

	i = 0;
	while (str[i] && *count != -1)
	{
		ft_putchar_va(str[i], count);
		i++;
	}
}
