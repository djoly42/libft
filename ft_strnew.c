/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:30:49 by djoly             #+#    #+#             */
/*   Updated: 2015/12/30 11:27:57 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = (char *)malloc(sizeof(char) * size + 1);
	if (!ret)
		return (NULL);
	ft_bzero(ret, size + 1);
	return (ret);
}
