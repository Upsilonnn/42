/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasmaata <wasmaata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:18:16 by wasmaata          #+#    #+#             */
/*   Updated: 2024/11/07 12:03:08 by wasmaata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s_tmp;

	s_tmp = (char *)s;
	while (n)
	{
		*s_tmp = '\0';
		s_tmp++;
		n--;
	}
}
