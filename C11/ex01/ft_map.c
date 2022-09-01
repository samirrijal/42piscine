/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:43:43 by srijal            #+#    #+#             */
/*   Updated: 2022/07/20 19:53:50 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	ret = malloc(sizeof(int) * length);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}

// #include <stdio.h>
// int	segfault(int i)
// {
// 	return  (i * i);
// }

// int main(void)
// {
// 	int	tab[4] = {1, 2, 3, 4};
// 	int	*result_tab = ft_map(tab, 4, &segfault);
// 	int curr = 0;
// 	while (curr < 4)
// 	{
// 		printf("%d, ", result_tab[curr]);
// 		curr++;
// 	}
// }
