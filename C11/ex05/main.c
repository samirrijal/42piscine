/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:51:01 by srijal            #+#    #+#             */
/*   Updated: 2022/07/20 16:56:40 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	check_zero(int b, char **argv)
{
	if (ft_strcmp(argv[2], "/") == 0 && b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (ft_strcmp(argv[2], "%") == 0 && b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	parse(int a, int b, char **argv, int *res)
{
	if (!check_zero(b, argv))
		return (-1);
	if (ft_strcmp(argv[2], "+") == 0)
		*res = plus(a, b);
	else if (ft_strcmp(argv[2], "-") == 0)
		*res = minus(a, b);
	else if (ft_strcmp(argv[2], "*") == 0)
		*res = multiply(a, b);
	else if (ft_strcmp(argv[2], "/") == 0)
		*res = divide(a, b);
	else if (ft_strcmp(argv[2], "%") == 0)
		*res = modulo(a, b);
	else
		*res = 0;
	return (1);
}

int	main(int argc, char **argv)
{
	int	res;
	int	a;
	int	b;

	if (argc != 4)
		return (-1);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (parse(a, b, argv, &res) == -1)
		return (-1);
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
