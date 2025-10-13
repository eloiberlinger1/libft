/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:46:31 by eberling          #+#    #+#             */
/*   Updated: 2025/10/12 14:38:03 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memchr(const void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*nptr;

	nptr = (const unsigned char *)ptr;
	i = 0;
	while (i < num && nptr[i] != value)
		i++;
	if (nptr[i] == value)
		return ((void *)&nptr[i]);
	return (NULL);
}
