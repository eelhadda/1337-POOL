/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhadda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:07:57 by eelhadda          #+#    #+#             */
/*   Updated: 2022/09/15 21:44:14 by eelhadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (*dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*new_string;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_len = ft_strlen(sep) * (size - 1);
	while (i < size)
		total_len = total_len + ft_strlen(strs[i++]);
	new_string = malloc(sizeof(char) * total_len);
	if (!new_string)
		return (0);
	ft_strcpy(new_string, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(new_string, sep);
		ft_strcat(new_string, strs[i]);
		i++;
	}
	return (new_string);
}
