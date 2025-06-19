/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <avalsang@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-02 13:36:10 by avalsang          #+#    #+#             */
/*   Updated: 2024-12-02 13:36:10 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int	digits;
	long 	num;

	digits = get_digits(n);
	result = (char *)malloc(sizeof(char) * digits + 1);
	if (result == NULL)
		return (NULL);
	num = n;
	if (n < 0)
	{
		result[0] = '-';
		num *= -1;
	}
	result[digits--] = '\0';
	while (digits >= 0)
	{
		result[digits] = num % 10 + '0';
		num /= 10;
		digits--;
	}
	return (result);
}

int main()
{
	printf("s = %s\n", ft_itoa(123456789));
}
