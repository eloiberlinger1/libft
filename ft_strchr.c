/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:06:28 by eberling          #+#    #+#             */
/*   Updated: 2025/10/12 13:07:03 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *str, int ch)
{
	char	*ret;
	int		i;

	ret = (char *)str;
	while (*ret != ch && *ret != '\0')
		ret++;
	if (*ret == '\0' && ch != '\0')
		return (NULL);
	return (ret);
}
// #include <stdio.h>
// int main()
// {
// 	char c = 'j';
// 	char string[] = "jbonjour";

// 	printf("%s\n", ft_strchr(string, c));
// }