/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:15 by srijal            #+#    #+#             */
/*   Updated: 2022/07/12 15:58:58 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	num;
	int	num_inv;

	if (nb <= 2)
		return (2);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (ft_find_next_prime(nb + 1));
	else if (nb == 4)
		return (5);
	else
	{
		num = 3;
		num_inv = nb / 2;
		while (num <= num_inv)
		{
			if (nb % num == 0 || nb % num_inv == 0)
				return (ft_find_next_prime(nb + 1));
			num += 2;
			num_inv -= 2;
		}	
	}
	return (nb);
}
