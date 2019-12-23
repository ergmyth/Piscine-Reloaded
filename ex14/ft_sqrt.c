/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 12:45:53 by eleonard          #+#    #+#             */
/*   Updated: 2019/09/02 13:44:07 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int				sqrt;
	unsigned int	square;

	square = 0;
	sqrt = 0;
	if (nb >= 0)
	{
		while (square <= (unsigned int)nb)
		{
			square = sqrt * sqrt;
			if ((unsigned int)nb == square)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
