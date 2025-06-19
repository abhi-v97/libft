/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <avalsang@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-02 13:45:46 by avalsang          #+#    #+#             */
/*   Updated: 2024-12-02 13:45:46 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char *arr = "abcde";
	printf("result = %p\n", ft_memchr(arr, 'd', 5));
	printf("result = %p\n", &arr[3]);
}
 */