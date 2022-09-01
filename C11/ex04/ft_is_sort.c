/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:44:02 by srijal            #+#    #+#             */
/*   Updated: 2022/07/20 19:54:04 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	increase;
	int	decrease;

	i = 1;
	increase = 1;
	decrease = 1;
	if (length <= 1)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) < 0)
			decrease = 0;
		i++;
	}
	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			increase = 0;
		i++;
	}
	if (increase || decrease)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int ft_more_than(int a, int b)
// {
// 	return (a - b);
// }

// int ft_less_than(int a, int b)
// {
// 	return (b - a);
// }

// int	main(void)
// {
// 	int	tabx[] = {1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6, 7};
// 	int i = 0;
// 	int *tab;
// 	int length = 10;
// 	tab = malloc(length * sizeof(int));
// 	while (i < length)
// 	{
// 		tab[i] = i;
// 		i++;
// 	}
// 	printf("ft_is_sorted(1........10) = 
//	%d\n", ft_is_sort(tab, length, &ft_less_than));
// 	i = 0;
// 	while (i < length)
// 	{
// 		tab[length - 1 - i] = i;
// 		i++;
// 	}
// 	printf("ft_is_sorted(10........1) = 
//	%d\n", ft_is_sort(tab, length, &ft_more_than));
// 	tab[5] = 100;
// 	printf("ft_is_sorted(10...100...1) = 
//	%d\n", ft_is_sort(tab, length, &ft_more_than));
// 	tab[5] = 4;
// 	tab[9] = 100;
// 	printf("ft_is_sorted(10.....1.100) = %d\n", 
//	ft_is_sort(tab, length, &ft_more_than));
// 	printf("ft_is_sorted(.tabx.......) = %d\n", 
//	ft_is_sort(tabx, 13, &ft_more_than));
// 	printf("ft_is_sorted(.tabx.......) = %d\n", 
//	ft_is_sort(tabx, 13, &ft_less_than));
// }
