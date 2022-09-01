/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:11 by srijal            #+#    #+#             */
/*   Updated: 2022/07/12 15:58:47 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	num;
	int	num_inv;

	if (nb <= 1 || nb == 4)
		return (0);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (0);
	num = 3;
	num_inv = nb / 2;
	while (num <= num_inv)
	{
		if (nb % num == 0 || nb % num == 0)
			return (0);
		num += 2;
		num_inv -= 2;
	}
	return (1);
}
