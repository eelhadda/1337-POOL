/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhadda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:10:20 by eelhadda          #+#    #+#             */
/*   Updated: 2022/09/11 18:17:23 by eelhadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	*swp;

	a = 1;
	while (a < ac)
	{
		b = a + 1;
		while (b < ac)
		{
			if (ft_strcmp(av[a], av[b]) < 0)
			{
				swp = av[b];
				av[b] = av[a];
				av[a] = swp;
			}
			b++;
		}
		a++;
	}
	while (ac-- > 1)
	{
		ft_putstr(av[ac]);
	}
}
