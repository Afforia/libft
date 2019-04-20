/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaley <thaley@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 01:43:40 by thaley            #+#    #+#             */
/*   Updated: 2019/04/20 03:19:11 by thaley           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Обнуляет строку
*/

void		ft_bzero(void *s, size_t n)
{
	if (!n || !s)
		return ;
	ft_memset(s, '\0', n);
}