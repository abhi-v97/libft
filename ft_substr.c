/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <avalsang@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-02 13:32:56 by avalsang          #+#    #+#             */
/*   Updated: 2024-12-02 13:32:56 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL || substr == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s) && i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/* 
int	main(void)
{
	char *arr = "hello world";
	printf("substr = %s\n", ft_substr(arr, 6, 5));
}
 */