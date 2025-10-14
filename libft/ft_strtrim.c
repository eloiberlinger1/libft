/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:22 by eberling          #+#    #+#             */
/*   Updated: 2025/10/14 11:14:43 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int contains(char c, char *set)
{
	while(*set)
		if(c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		n;
	int		s1_len;
	char	*ret;

	s1_len = ft_strlen(s1);
	i = 0;
	n = 0;
	while (i < s1_len)
	{
		if (contains(s1[i++], (char *)set))
			continue;
		n++;
	}
	ret = (char *) malloc(n * sizeof(char));
	n = 0;
	i = 0;
	while ( i < s1_len )
	{
		if (!contains(s1[i], (char *)set))
			ret[n++] = s1[i++];
		else
			i++;
	}
	return (ret);
}

int main()
{
	char test1[] = "";
	char set[] = "ad56sad1561";

	printf("%s\n", ft_strtrim(test1, set));
}