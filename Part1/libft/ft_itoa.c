/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda  <ubeyazda@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:23:09 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/10/14 20:00:59 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check(int *n, size_t *size, long *nbr)
{
	if (*n < 0)
	{
		*size = 1;
		*nbr = -(*nbr);
	}
	else if (*n == 0)
		*size = 1;
	while (*n)
	{
		*n /= 10;
		*size = *size + 1;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	long	nbr;

	size = 0;
	nbr = n;
	check(&n, &size, &nbr);
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	str[size--] = '\0';
	while (nbr > 0)
	{
		str[size--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] != '\0')
		str[size] = '-';
	else if (size == 0)
		str[size] = '0';
	return (str);
}
