/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:43:52 by srijal            #+#    #+#             */
/*   Updated: 2022/07/20 19:53:57 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
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
// 	char	**tab;
// 	tab = malloc(5 * sizeof(char *));

// 	tab[0] = "O";
// 	tab[1] = "O";
// 	tab[2] = "O";
// 	tab[3] = "X";
// 	tab[4] = 0;
// 	printf("ft_any(...) = %d\n", ft_any(tab, &segfault));
// }
