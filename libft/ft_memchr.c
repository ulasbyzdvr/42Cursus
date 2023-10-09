/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:59:29 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/10/09 16:26:09 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*found;

	p = (unsigned char *)s;
	found = NULL;
	while ((s != NULL) && (n--))
	{
		if (*p != (unsigned char)c)
		{
			p++;
		}
		else
		{
			found = p;
			break ;
		}
	}
	return (found);
}
