/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:05:20 by tpons             #+#    #+#             */
/*   Updated: 2021/12/07 15:48:56 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (!s)
		return (ft_strdup(""));
	if (ft_strlen(s) < start)
		len = 0;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_memmove((void *)str, &s[start], len);
	str[len] = '\0';
	return ((char *)str);
}
