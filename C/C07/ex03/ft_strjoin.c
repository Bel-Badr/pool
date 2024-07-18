/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeladas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:01:57 by bbeladas          #+#    #+#             */
/*   Updated: 2024/07/17 11:02:20 by bbeladas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*str_cat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	totallen(char **str, int size)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += str_len(str[i]);
		i++;
	}
	return (total);
}

char	*size0(void)
{
	char	*p;

	p = (char *)malloc(sizeof(char));
	p[0] = '\0';
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		seplen;
	int		total_len;
	int		i;
	char	*p;

	if (size == 0)
		return (size0());
	if (size == 1)
		total_len = totallen(strs, size);
	seplen = str_len(sep);
	total_len = totallen(strs, size) + (size - 1) * seplen;
	i = 0;
	p = (char *)malloc(sizeof(char) * (total_len + 1));
	p[0] = '\0';
	while (i < size)
	{
		str_cat(p, strs[i]);
		if (i < size - 1)
			str_cat(p, sep);
		i++;
	}
	return (p);
}
