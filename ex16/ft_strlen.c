/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 12:47:22 by eleonard          #+#    #+#             */
/*   Updated: 2019/09/02 12:47:24 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int counter_of_chars;

	counter_of_chars = 0;
	while (str[counter_of_chars])
	{
		counter_of_chars++;
	}
	return (counter_of_chars);
}
