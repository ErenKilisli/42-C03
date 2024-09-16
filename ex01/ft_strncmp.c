/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:17:10 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/11 18:49:14 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	scompare(char *s1, char *s2, unsigned int i)

{
	if (s1[i] != s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;
	int				result;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		result = scompare (s1, s2, i);
		if (result != 0)
			return (result);
		i++;
	}
	if (i < n)
	{
		result = scompare (s1, s2, i);
		if (result != 0)
			return (result);
		i++;
	}
	return (0);
}
