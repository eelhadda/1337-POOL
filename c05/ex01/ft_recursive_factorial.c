/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhadda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:25:03 by eelhadda          #+#    #+#             */
/*   Updated: 2022/09/14 10:07:39 by eelhadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	while (nb >= 0)
	{
		if (nb == 0 || nb == 1)
			return (1);
		else
		{
			nb = nb * ft_recursive_factorial(nb - 1);
			return (nb);
		}
	}
	return (0);
}
