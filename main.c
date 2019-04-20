/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaley <thaley@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 01:35:29 by thaley            #+#    #+#             */
/*   Updated: 2019/04/20 03:39:15 by thaley           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main()
{
	char	test[255] = "1dfh.jhdghlhgsd;irh";
	char	*s;
	char	*s1;
	// char	test2[15] = "1";

	s = ft_strdup(test);
	s1 = strdup(test);
	printf("%s || %s\n", s, s1);
	return (0);
}