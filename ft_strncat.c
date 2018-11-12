/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:16:17 by xwang             #+#    #+#             */
/*   Updated: 2018/10/27 15:36:54 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *ptr;

	ptr = s1;
	while (*ptr)
		ptr++;
	while (*s2 && n)
	{
		*(ptr++) = *(s2++);
		n--;
	}
	*ptr = '\0';
	return (s1);
}
