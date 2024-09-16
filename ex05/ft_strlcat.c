/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:42:43 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/11 11:05:27 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (destlen < size && dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (size <= destlen)
		return (size + srclen);
	while (src[i] != '\0' && (destlen + i) < (size - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	if ((destlen + i) < size)
		dest[destlen + i] = '\0';
	return (destlen + srclen);
}
