/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:57:06 by eberling          #+#    #+#             */
/*   Updated: 2025/10/13 11:03:45 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (n == 0 || src == dest || !src || !dest)
		return (dest);
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d >= s)
	{
		d += n - 1;
		s += n - 1;
		while (n > 0)
		{
			*d-- = *s--;
			n--;
		}
		return (dest);
	}
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	int test1[6] = {1,2,3,4,5,6};
// 	int test2[6] = {1,9,9,4,2,0};

// 	ft_memmove(&test1[2], &test1, 3*sizeof(int));

// 	printf("%d\n", test2[0]);
// 	printf("%d\n", test2[1]);
// 	printf("%d\n", test2[2]);

// }