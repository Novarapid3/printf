/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccasado- <ccasado-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:09:48 by ccasado-          #+#    #+#             */
/*   Updated: 2024/02/08 19:59:58 by ccasado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')));
}