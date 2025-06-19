/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <avalsang@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-02 16:08:01 by avalsang          #+#    #+#             */
/*   Updated: 2024-12-02 16:08:01 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>
int main()
{
    char test1[] = "Hello World";
    char test2[] = "Hell";
    printf("Strncmp = %i\n", ft_strncmp(test1, test2, 4));
	printf("Strncmp = %i\n", ft_strncmp(test1, test2, 10));
    return 0;
}
 */