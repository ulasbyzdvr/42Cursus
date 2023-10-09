/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:39:23 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/10/09 14:05:09 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*csrc;
	char		*cdst;
	char		*temp;	
	int			i;

	csrc = (char *) src;
	cdst = (char *) dst;
	i = 0;
	temp = (char *)malloc(sizeof(char) * len);
	if (NULL == temp)
		return (NULL);
	else
	{
		while (i < len)
		{
			temp[i] = csrc[i];
			cdst[i] = temp[i];
			i++;
		}
		free(temp);
	}
	return (cdst);
}
