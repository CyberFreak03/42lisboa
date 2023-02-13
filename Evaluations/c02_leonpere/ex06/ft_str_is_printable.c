/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:15:33 by leonpere          #+#    #+#             */
/*   Updated: 2023/02/05 16:21:36 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 32 && str[a] <= 126))
		{
			return (0);
		}
		a++;
	}
	return (1);
}


int	main(void)
{
	printf("%d", ft_str_is_printable("ABCDFERET7\6"));
	printf("\n%d", ft_str_is_printable("\n\5\7"));
}

