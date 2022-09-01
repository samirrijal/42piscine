/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:43:58 by srijal            #+#    #+#             */
/*   Updated: 2022/07/20 19:54:00 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

// #include <stdio.h>
// #include <stdlib.h>

// int segfault(char *str)
// {
// 	if (*str == 'X')
// 		return (1);
// 	else
// 		return (0);
// }

// int	main(void)
// {
// 	int		length;
// 	char	**tab;

// 	length = 5;
// 	tab = malloc(length * sizeof(char *));

// 	tab[0] = "O";
// 	tab[1] = "X";
// 	tab[2] = "O";
// 	tab[3] = "X";
// 	tab[4] = "X";
// 	printf("ft_count_if(...) = %d\n", ft_count_if(tab, length, &segfault));
// }
