/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:46:34 by jfaustin          #+#    #+#             */
/*   Updated: 2023/02/07 12:24:35 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_alphanumeric(char c)
{
	if (c < '0' || c > 'z')
		return (0);
	else if (c > 'Z' && c < 'a')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	check;

	count = 0;
	check = check_alphanumeric(str[count]);
	if (check == 1 && (str[count] >= 'a' && str[count] <= 'z'))
		str[count] -= 32;
	while (str[count] != '\0')
	{
		check = check_alphanumeric(str[count]);
		if (check == 0)
		{
			count++;
			check = check_alphanumeric(str[count]);
			if (check == 1 && (str[count] >= 'a' && str[count] <= 'z'))
				str[count] -= 32;
			else if (check == 0)
				count--;
		}
		else if (str[count] >= 'A' && str[count] <= 'Z' && count != 0)
			str[count] += 32;
		count++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "oLa, tuDo bem? 42palavras quarentA-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
}