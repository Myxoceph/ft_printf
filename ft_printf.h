/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:02:28 by abakirca          #+#    #+#             */
/*   Updated: 2024/01/10 18:02:28 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_hexprint(unsigned long nb, char base);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_putchargs(va_list args);
int		ft_putchar(char c);
int		ft_putstr(va_list args);
int		ptrout(va_list arguments);
int		ft_printer(char *str, va_list args, int count);
int		ft_printf(const char *str, ...);
int		firstpart(va_list args, char *str);
int		secondpart(va_list args, char *str);
int		thirdpart(va_list args, char *str);

#endif