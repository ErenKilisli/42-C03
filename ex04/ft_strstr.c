/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:08:39 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/11 11:29:08 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str2(int i, int findlen, char *str, char *to_find)

{
	int	f;

	f = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			f = 0;
			while (f < findlen && str[i + f] == to_find[f])
			{
				f++;
				if (f == findlen)
					return (i);
			}
		}
		i++;
	}
	return (-1);
}

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	f;
	int	findlen;

	i = 0;
	f = 0;
	findlen = 0;
	while (to_find[findlen] != '\0')
		findlen++;
	if (findlen == 0)
		return (str);
	i = str2(i, findlen, str, to_find);
	if (i != -1)
		return (&str[i]);
	return (NULL);
}
