/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasado- <ccasado-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:19:08 by ccasado-          #+#    #+#             */
/*   Updated: 2024/02/13 22:25:06 by ccasado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

void	flag_manager(char v, va_list args, int *count)
{
	if (v == 'c')
		ft_putchar_va(va_arg(args, int), count);
	else if (v == 's')
		ft_putstr_va(va_arg(args, char *), count);
	else if (v == 'p')
		ft_putptr(va_arg(args, unsigned long), count);
	else if (v == 'd' || v == 'i')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789", count);
	else if (v == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), count);
	else if (v == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", count);
	else if (v == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	else if (v == '%')
		ft_putchar_va('%', count);
}

int	ft_printf(char const *str, ...)
{
	int		count;
	int		str_pos;
	va_list	args;

	va_start(args, str);
	count = 0;
	str_pos = 0;
	while (str[str_pos] && count != -1)
	{
		if (str[str_pos] == '%')
		{
			flag_manager(str[str_pos + 1], args, &count);
			str_pos = str_pos + 1;
		}
		else
			ft_putchar_va(str[str_pos], &count);
		str_pos = str_pos + 1;
	}
	va_end(args);
	printf("%d", str_pos);
	return (count);
}

int	main(void)
{
	char	*s;
	char	c;
	int		ct1;
	int		ct2;

	c = 'h';
	s = "buenas";
	//ct1 = ft_printf("hola: %s, %s, %s", s, s, s);
	printf("\n\n");
	ct2 = printf("%p", &s);
	//printf("\n%d vs %d", ct1, ct2);
}
