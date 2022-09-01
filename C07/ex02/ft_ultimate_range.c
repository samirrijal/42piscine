/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:21:13 by srijal            #+#    #+#             */
/*   Updated: 2022/07/19 20:33:33 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

// #include <stdio.h>
// int main(void)
// {
// 	int *p;
// 	int i;

// 	i = ft_ultimate_range(&p, 0, 20);
// 	printf("%d\n", i);
// 	printf("[ ");
// 	while (i > 0)
// 	{
// 		printf("%d ", *p);
// 		p++;
// 		i--;
// 	}
// 	printf("]\n");
// 	free(p);
// }
