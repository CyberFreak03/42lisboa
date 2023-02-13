/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:15:33 by leonpere          #+#    #+#             */
/*   Updated: 2023/02/05 16:19:19 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A' && str [a] <= 'Z')
			|| (str [a] >= 'a' && str [a] <= 'z'))
			a++;
		else
			return (0);
	}
	return (1);
}


int	main(void)
{
	printf("%d", ft_str_is_alpha("abcdefghijk"));
	printf("\n%d", ft_str_is_alpha("abcdefg1234"));
	printf("\n%d", ft_str_is_alpha("-_msggujnd8"));
}
