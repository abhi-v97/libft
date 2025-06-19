/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <avalsang@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-02 13:34:00 by avalsang          #+#    #+#             */
/*   Updated: 2024-12-02 13:34:00 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strrchr(set, s1[end]))
		end--;
	if (start == end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start + 2));
}

int main()
{
	char *arr = "  ";
	char *set = "  ";

	printf("test = %s\n", ft_strtrim(arr, set));
}
