/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:15:33 by leonpere          #+#    #+#             */
/*   Updated: 2023/02/05 16:20:55 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 'A' && str[a] <= 'Z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}


int	main(void)
{
	printf("%d", ft_str_is_uppercase("ABCDEFGH"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFgH"));
	printf("\n%d", ft_str_is_uppercase("-_jdGHI09"));
}
