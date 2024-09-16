/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:45:46 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/11 11:02:51 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	i;
	int				destlen;

	destlen = 0;
	i = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[i] != '\0' && i < nb)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

// int main (void) 
// {
// 	char d[20] = "Hello";
// 	char s[6] = "World";
// 	unsigned int n= 3;
// 	ft_strncat(d, s, n);
// 	write (1, d, 20);
// }