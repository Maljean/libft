/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:17:18 by maljean           #+#    #+#             */
/*   Updated: 2018/03/01 14:54:41 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = dest;
	s2 = (char*)src;
	if (ft_strlen(s2) < n)
	{
		while (i++ < ft_strlen(s2))
			*dest++ = *src++;
		while (i++ <= n)
			*dest++ = '\0';
	}
	else
	{
		while (i++ < n && src)
			*dest++ = *src++;
	}
	return (s1);
}
