/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaley <thaley@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 01:29:46 by thaley            #+#    #+#             */
/*   Updated: 2019/04/20 03:18:40 by thaley           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Заполняет строку 'b' символами 'c' на 'len' байт
*/

void		*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = b;
	if (!b || !len)
		return (b);
	while(i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (b);
}