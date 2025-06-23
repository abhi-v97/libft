/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <avalsang@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-04 16:06:33 by avalsang          #+#    #+#             */
/*   Updated: 2025-04-04 16:06:33 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// returns a malloc'd string of s, copying up to n chars
char	*ft_strndup(const char *s, int n)
{
	int		len;
	char	*dup_str;

	len = 0;
	dup_str = malloc(sizeof(char) * (n + 1));
	if (!dup_str)
		return (NULL);
	while (s[len] && len < n)
	{
		dup_str[len] = s[len];
		len++;
	}
	dup_str[len] = '\0';
	return (dup_str);
}
