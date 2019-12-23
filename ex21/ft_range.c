/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 12:51:01 by eleonard          #+#    #+#             */
/*   Updated: 2019/09/05 09:26:16 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		i;

	if (max > min)
	{
		i = 0;
		arr = (int*)malloc(sizeof(*arr) * (max - min));
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
		return (arr);
	}
	return (NULL);
}
