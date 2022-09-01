/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:44:11 by srijal            #+#    #+#             */
/*   Updated: 2022/07/20 19:54:22 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	tabsize;

	i = 0;
	tabsize = 0;
	while (tab[tabsize])
		tabsize++;
	while (i < tabsize - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int		ft_strcmp(char *s1, char *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }
//
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
// 	ft_advanced_sort_string_tab(tab, &ft_strcmp);
// 	printf("\n");
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("tab[%d] <@ %p> = $%s$\n", i, tab + i, tab[i]);
// 		i++;
// 	}
// }
