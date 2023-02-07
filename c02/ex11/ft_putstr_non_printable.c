/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:34:20 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/07 17:04:06 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (ft_is_printable(str[a]) == 1)
		{
			ft_putchar(str[a]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[a] / 16]);
			ft_putchar("0123456789abcdef"[str[a] % 16]);
		}
		a++;
	}
}

// int	main(void)
// {
// 	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

// 	ft_putstr_non_printable(str);
// 	write(1, "\n", 1);
// 	return (0);
// }
