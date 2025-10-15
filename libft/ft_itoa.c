/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:07:26 by eberling          #+#    #+#             */
/*   Updated: 2025/10/15 09:21:35 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_char_size(long long n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		c++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		digit;
	int		b;
	size_t	i;

	n = (long long) n;
	ret = (char *) malloc(get_char_size(n) + 1);
	i = get_char_size(n);
	ret[i] = '\0';
	if (n < 0)
	{
		ret[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		i--;
		ret[i] = n % 10 + '0';
		n = n / 10;
	}
	return (ret);
}

// int main()
// {
// 	int test = 123;
//     printf("%s\n", ft_itoa(test));
// 	test = -5465;
//     printf("%s\n", ft_itoa(test));

// }