/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <avalsang@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-02 13:46:43 by avalsang          #+#    #+#             */
/*   Updated: 2024-12-02 13:46:43 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	check_sep(char c, char sep)
{
	if (c == sep) //  || c == '\0'
		return (1);
	return (0);
}

int	count_words(const char *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (check_sep(str[i + 1], sep))
			if (check_sep(str[i], sep) == 0)
				words++;
		i++;
	}
	return (words);
}

int	word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], c))
		i++;
	return (i);
}

char	*ft_strdup_split(const char *str, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = word_len(str, c);
	word = (char *) malloc (sizeof(char) * len + 1);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = 0;
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (s == NULL || result == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			result[i++] = ft_strdup_split(s, c);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = 0;
	return (result);
}

/* 
int	main(void)
{
	char	**res;
	char *arr;
	int i = 0;
	arr = (char *) malloc (50000 * sizeof(char));
	arr = "word1 word2 word3 word4 !    ";
	res = ft_split(arr, ' ');
	printf("words = %i\n", count_words(arr, ' '));
	while (i <= count_words(arr, ' '))
		printf("res = %s\n", res[i++]);
	return (0);
}
 */