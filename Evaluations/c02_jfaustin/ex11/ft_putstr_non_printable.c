/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:55:37 by jfaustin          #+#    #+#             */
/*   Updated: 2023/02/07 13:25:05 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexadecimal_print(int n)
{
	int		count;
	char	print[2];

	print[0] = '0';
	print[1] = '0';
	count = 0;
	while (count < n)
	{
		if (print[1] == '9')
			print[1] += 40;
		else if (print[1] == 'f')
		{
			print[0]++;
			print[1] = '0';
		}
		else
			print[1]++;
		count++;
	}
	write(1, &print[0], 1);
	write(1, &print[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	count;
	int	value;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] <= ' ' || str[count] >= '~')
		{
			value = str[count];
			write(1, "\\", 1);
			hexadecimal_print(value);
		}
		else
			write(1, &str[count], 1);
		count++;
	}
}

int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C', 127, 32};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}