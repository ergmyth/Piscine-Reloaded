/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 12:50:32 by eleonard          #+#    #+#             */
/*   Updated: 2019/09/02 12:50:35 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		k;
	char	*str;

	k = 0;
	i = 0;
	while (src[k])
		k++;
	str = (char*)malloc(k);
	while (i < k)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
