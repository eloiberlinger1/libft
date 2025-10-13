/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 19:04:15 by eberling          #+#    #+#             */
/*   Updated: 2025/10/09 19:05:30 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i != n)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (s);
}

void	ft_bzero(void *s, size_t size)
{
	ft_memset(s, 0, size);
}
