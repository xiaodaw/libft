/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:01:06 by xwang             #+#    #+#             */
/*   Updated: 2018/09/13 13:53:57 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	int		k;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	k = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (k);
}
