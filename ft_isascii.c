/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <avalsang@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-26 16:26:18 by avalsang          #+#    #+#             */
/*   Updated: 2024-11-26 16:26:18 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (c);
	return (0);
}
/* 
#include <stdio.h>
#include <ctype.h>
int	main (void)
{
	printf("myfunc = %i\n", ft_isascii(127));
	printf("orig = %i", isascii(127));
	printf("");
	printf("myfunc = %i\n", ft_isascii(128));
	printf("orig = %i", isascii(128));
}
 */