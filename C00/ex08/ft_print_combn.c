/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:53:05 by srijal            #+#    #+#             */
/*   Updated: 2022/07/04 11:17:20 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int value, int in, int elevatedSize)
{
	char	v;

	if (in < elevatedSize)
	{
		write (1, "0", 1);
	}
	while (value != 0)
	{
		v = (value % 10) + 48;
		write (1, &v, 1);
		value /= 10;
	}
}

int	elevated(int n, int elevated)
{
	int	value;
	int	index;

	value = 1;
	if (n != 0)
	{
		index = 1;
		while (index <= elevated)
		{
			value *= n;
			index++;
		}
	}
	else
	{
		return (0);
	}
	return (value);
}

int	print(int status, int in, int elevatedSize)
{
	int	inverse_number;
	int	previous_value;
	int	value;
	int	n;

	inverse_number = 0;
	previous_value = 10;
	n = in;
	while (n != 0)
	{
		inverse_number *= 10;
		value = (n % 10);
		inverse_number += value;
		n /= 10;
		if (value >= previous_value)
		{
			return (-1);
		}
		previous_value = value;
	}
	print_numbers(inverse_number, in, elevatedSize);
	return (status);
}

void	function(int n)
{
	int	in;
	int	elevated_size;
	int	max_size;
	int	verify;

	in = 12345678 / elevated(10, 9 - n);
	elevated_size = elevated(10, n - 1);
	max_size = elevated_size * 9;
	while (in <= max_size)
	{
		if (print(1, in, elevated_size) == 1)
		{
			verify = in / elevated_size;
			if (verify == (10 - n))
			{
				in = max_size + 1;
			}
			else
			{
				write(1, ", ", 2);
			}
		}
		in++;
	}
}

void	ft_print_combn(int n)
{
	if ((n <= 9) && (n >= 1))
	{
		function(n);
	}
}
