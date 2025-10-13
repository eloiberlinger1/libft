/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:55:15 by eberling          #+#    #+#             */
/*   Updated: 2025/10/11 17:03:18 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	if (size <= 0)
		return ;
	i = 0;
	while (i < size && dst[i] != '\0' && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

// #include <stdio.h>
// int main(){

// 	char test1[] = "adasdasd";
// 	char test2[3];

// 	ft_strlcpy(test1, test2, 3);
// 	printf("%s\n", test2);

// }