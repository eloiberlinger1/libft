/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 22:53:36 by eberling          #+#    #+#             */
/*   Updated: 2025/10/13 11:00:58 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		n;
	int		needle_len;
	char	*ret;

	if (needle[0] == '\0')
		return ((char *)(haystack));
	i = 0;
	needle_len = ft_strlen(needle);
	while (i < len && i + needle_len <= len)
	{
		n = 0;
		while (needle[n] != '\0' && haystack[i + n] == needle[n])
			n++;
		if (needle[n] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main()
// {
// 	char test1[] = "1234";
// 	char test2[] = "23";

// 	printf("%s\n", ft_strnstr(test1, test2, 3));
// }
