/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:47:12 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/10/09 15:01:16 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = 0;
	while (s[i])
	{
		i++;
	}
	while (s[i] != a && 0 < i)
		i--;
	if (s[i] == a)
		return ((char *)(s + i));
	return (NULL);
}
