/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:07:26 by eberling          #+#    #+#             */
/*   Updated: 2025/10/14 22:02:41 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void strrev(char *s)
{
	size_t s_len;
	size_t i;
	char temp;

	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		temp = s[i];
		s[i] = s[s_len - i];
		s[s_len - i] = temp;
		i++;
	}
	s[i] = '\0';
}

char *ft_itoa(int n)
{
	char	*ret;
	int		digit;
	int		c;
	int		b;
	int		i;

	c = 0;
	if(n < 0)
		digit = -1;
	b = n;
	while (n > 0)
	{
		n = n/10;
		c++;
	}
	n = b;
	ret = (char *) malloc(c + 1);
	i = 0;
	while (n > 0)
	{
		ret[i++] = n%10 + '0';
		n = n/10;
	}
	ret[i] = '\0';
	strrev(ret);
	return (ret);
}

int main()
{
    int test = 123;
    printf("%s\n", ft_itoa(test));
}