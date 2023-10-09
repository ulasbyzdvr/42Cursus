/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:15:57 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/10/09 13:28:21 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*b;

	b = s;
	while (n > 0)
	{
		*b = '\0';
		b++;
		n--;
	}
	return (0);
}
