/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:44:08 by srijal            #+#    #+#             */
/*   Updated: 2022/07/20 16:55:43 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i + 1])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
// 	int i;
// 	char **tab;

// 	tab = malloc(8 * sizeof(char *));
// 	tab[0] = strdup("hello");
// 	tab[1] = strdup("world");
// 	tab[2] = strdup("a");
// 	tab[3] = strdup("aa");
// 	tab[4] = strdup("ba");
// 	tab[5] = strdup("ab");
// 	tab[6] = strdup("z");
// 	tab[7] = 0;
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("tab[%d] <@ %p> = $%s$\n", i, tab + i, tab[i]);
// 		i++;
// 	}
// 	ft_sort_string_tab(tab);
// 	printf("\n");
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("tab[%d] <@ %p> = $%s$\n", i, tab + i, tab[i]);
// 		i++;
// 	}
// }
