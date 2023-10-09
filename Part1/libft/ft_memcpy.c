/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:29:25 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/10/09 14:22:41 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*csrc;
	char	*cdst;
	int		i;

	i = 0;
	csrc = (char *) src;
	cdst = (char *) dst;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (0);
}
