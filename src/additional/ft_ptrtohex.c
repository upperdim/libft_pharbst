/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrtohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 02:48:16 by pharbst           #+#    #+#             */
/*   Updated: 2022/09/10 15:16:10 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftio.h"

char	*ft_ptrtohex(void *ptr)
{
	char	str[12];
	char	*ret;

	if (!ptr)
		return ("(null)");
	str[0] = '0';
	str[1] = 'x';
	ft_memcpy(str + 2, ft_itohex((unsigned long)ptr), 10);
	ret = str;
	return (ret);
}
