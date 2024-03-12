/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoham <marmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:24:59 by marmoham          #+#    #+#             */
/*   Updated: 2023/08/04 12:56:58 by marmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)

{
	while (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}
// int main()
// {
//     char w = 't';
//     printf("%c", ft_toupper(w));
// }