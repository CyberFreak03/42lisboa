/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:19:16 by leonpere          #+#    #+#             */
/*   Updated: 2023/02/05 16:20:31 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 48 && str[a] <= 57))
		{
			return (0);
		}
		a++;
	}
	return (1);
}


int	main(void)
{
	printf("%d", ft_str_is_numeric("a"));
	printf("\n%d", ft_str_is_numeric("01234568s9"));
	printf("\n%d", ft_str_is_numeric("-_hdjje9uh9f"));
}

