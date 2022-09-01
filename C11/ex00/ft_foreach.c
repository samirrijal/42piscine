/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:43:39 by srijal            #+#    #+#             */
/*   Updated: 2022/07/20 19:53:46 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <stdio.h>
// void	bus_error(int i)
// {
// 	printf("%d, ", i);
// }

// int main(void)
// {
// 	int	tab[4] = {1, 2, 3, 4};
// 	ft_foreach(tab, 4, &bus_error);
// }
