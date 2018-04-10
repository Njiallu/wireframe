/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:35:39 by mbeilles          #+#    #+#             */
/*   Updated: 2017/04/13 18:39:03 by mbeilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	while (i < j)
	{
		f(&s[i]);
		i++;
	}
}
