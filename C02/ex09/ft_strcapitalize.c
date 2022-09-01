/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:12:40 by srijal            #+#    #+#             */
/*   Updated: 2022/07/07 19:26:38 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i - 1] && str[i - 1] <= 'z')
			a = 1;
		else if ('0' <= str[i - 1] && str[i - 1] <= '9')
			a = 1;
		else if ('A' <= str[i - 1] && str[i - 1] <= 'Z')
			a = 1;
		else
			a = 0;
		if ('A' <= str[i] && str[i] <= 'Z' && a == 1)
			str[i] = str[i] + 32;
		if ('a' <= str[i] && str[i] <= 'z' && a == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
