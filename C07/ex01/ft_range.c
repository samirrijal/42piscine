/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:21:11 by srijal            #+#    #+#             */
/*   Updated: 2022/07/19 20:33:24 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc((max - min) * sizeof(int));
	if (p == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}

// #include <stdio.h>
// int main(void)
// {
// 	int *p;
// 	int i;

// 	i = 0;
// 	p = ft_range(-5, 6);
// 	printf("[ ");
// 	while (i < 11)
// 	{
// 		printf("%d ", p[i]);
// 		i++;
// 	}
// 	printf("]\n");
// 	free(p);
// }
