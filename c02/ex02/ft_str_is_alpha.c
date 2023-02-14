/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:36:49 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/14 17:36:38 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] > 'Z' || str[n] < 'A') && (str[n] > 'z' || str[n] < 'a'))
		{
			return (0);
		}
		n++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_str_is_alpha("abcdefghijk"));
// 	printf("\n%d", ft_str_is_alpha("abcdefg1234"));
// 	printf("\n%d", ft_str_is_alpha("-_msggujnd8"));
// }
