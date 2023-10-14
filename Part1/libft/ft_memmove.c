/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:39:23 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/10/14 15:35:04 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*csrc;
	unsigned char		*cdst;

	csrc = (const unsigned char *) src;
	cdst = (unsigned char *) dst;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len)
	{
		len--;
		cdst[len] = csrc[len];
	}
	return (dst);
}
