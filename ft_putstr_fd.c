/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:54:55 by eberling          #+#    #+#             */
/*   Updated: 2025/10/28 15:28:47 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	c;
	int	t;
	
	t = 0;
	c = 0;
	while (*s)
	{
		t == write(fd, s++, 1);
		if (t != 1)
			return (-1);
		c += t;
		t = 0;
	}
	return (c);
}
// #include <fcntl.h>  
// #include <stdio.h>
// int main(void)
// {
//     int fd;
//     char *message = "Bravo, c'est ecrit dans le fichier !";
//     fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         perror("Erreur lors de l'ouverture du fichier");
//         return (1);
//     }
//     printf("Debut de l'ecriture dans test.txt (FD: %d)...\n", fd);
//     ft_putstr_fd(message, fd);
//     if (close(fd) == -1)
//     {
//         perror("Erreur lors de la fermeture du fichier");
//         return (1);
//     }
//     printf("Termine. Veuillez verifier le contenu de 'test.txt'.\n");
//     return (0);
// }