/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strclr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:34:05 by mbeilles          #+#    #+#             */
/*   Updated: 2017/04/13 18:35:29 by mbeilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_strclr(char *s)
{
	ft_bzero(s, ft_strlen(s));
}
