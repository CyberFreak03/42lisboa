/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:20:55 by leonpere          #+#    #+#             */
/*   Updated: 2023/02/05 16:23:46 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a1;
	int	b;

	a1 = 0;
	b = 1;
	ft_strlowcase(str);
	while (str[a1] != '\0')
	{
		if (str[a1] >= 'a' && str[a1] <= 'z')
		{
			if (b == 1)
				str[a1] -= 32;
				b = 0;
		}
		else if (str[a1] >= '0' && str[a1] <= '9')
			b = 0;
		else
			b = 1;
		a1++;
	}
	return (str);
}


int	main(void)
{
	char	str[] = "ola, tUDo bEm ? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
}

