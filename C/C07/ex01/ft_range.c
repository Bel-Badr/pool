/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeladas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:58:43 by bbeladas          #+#    #+#             */
/*   Updated: 2024/07/17 10:59:03 by bbeladas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*p;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		return (0);
	}
	p = (int *)malloc(size * sizeof(int));
	if (p == 0)
	{
		return (0);
	}
	while (i < size)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
