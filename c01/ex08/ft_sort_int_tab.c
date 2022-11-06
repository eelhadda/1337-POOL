/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhadda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:25:16 by eelhadda          #+#    #+#             */
/*   Updated: 2022/09/01 12:10:01 by eelhadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	first;
	int	second;
	int	tmp;

	first = 0;
	while (first < size)
	{
		second = first + 1;
		while (second < size)
		{
			if (tab[first] > tab[second])
			{
				tmp = tab[first];
				tab[first] = tab[second];
				tab[second] = tmp;
			}
			second++;
		}
		first++;
	}
}
