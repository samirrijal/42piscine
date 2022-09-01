/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:11:37 by srijal            #+#    #+#             */
/*   Updated: 2022/07/19 20:27:07 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	is_valid_base(char *base);
int	index_in_base(char c, char *base);
int	ft_atoi_base(char *str, char *base);

char	*ft_zero(char *base_to)
{
	char	*ret;

	ret = malloc(2 * sizeof(char));
	ret[0] = base_to[0];
	ret[1] = 0;
	return (ret);
}

char	*ft_strdup(char *src)
{
	char	*ret;
	int		i;

	ret = malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	if (!ret)
		return (NULL);
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

void	ft_rev_int_tab(char *tab, int size)
{
	int	i;
	int	a;

	a = 0;
	while (a < size)
	{
		i = tab[size - 1 - a];
		tab[size - 1 - a] = tab[a];
		tab[a] = i;
		a++;
		if (a >= size - 1 - a)
			break ;
	}
}

char	*ft_itoa_base(int nbr, char *base)
{
	int			i;
	char		ret[33];
	int			sign;
	char		*return_string;
	long int	n;

	i = 0;
	sign = 1;
	n = (long int)nbr;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	while (n)
	{
		ret[i++] = base[n % ft_strlen(base)];
		n = n / ft_strlen(base);
	}
	if (sign == -1)
		ret[i++] = '-';
	ret[i] = 0;
	ft_rev_int_tab(ret, ft_strlen(ret));
	return_string = ft_strdup(ret);
	return (return_string);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		value_b10;
	char	*res;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	value_b10 = ft_atoi_base(nbr, base_from);
	if (value_b10 == 0)
		return (ft_zero(base_to));
	res = malloc((ft_strlen(ft_itoa_base(value_b10, base_to)) + 1)
			* sizeof(char));
	if (!res)
		return (NULL);
	res = ft_itoa_base(value_b10, base_to);
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("Result: $%s$\n", ft_convert_base("2147483647", "0123456789", 
//	"0123456789abcdef"));
// 	printf("Result: $%s$\n", ft_convert_base("---------7fffffff", 
//	"0123456789abcdef", "01"));
// 	printf("Result: $%s$\n", ft_convert_base("---+--0001023a", 
//	"0123456789", "0123456789"));
// 	printf("Result: $%s$\n", ft_convert_base("-0", "0123456789", 
//	"abcdefghij"));
// }