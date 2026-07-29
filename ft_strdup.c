/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@mail.be>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:36:18 by user              #+#    #+#             */
/*   Updated: 2026/07/29 21:55:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int	size;
	char	*str_pt;
	int	i;	

	i = 0;
	size = ft_strlen(src) + 1;
	str_pt = malloc(sizeof(char) * size);
	if (str_pt == NULL)
		return (NULL);
	else
	{
		while (src[i] != '\0')
		{
			str_pt[i] = src[i];
			i++;
		}
		str_pt[i] = '\0';
		return (str_pt);
	}
}
