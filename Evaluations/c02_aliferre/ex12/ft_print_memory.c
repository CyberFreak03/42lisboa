/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:34:16 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:58:40 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned long value, int index)
{
	if (index > 0)
	{
		print_hex(value / 16, index - 1);
		if (value % 16 >= 10)
			ft_putchar('a' + ((value % 16) % 10));
		else
			ft_putchar('0' + (value % 16));
	}
}

void	ft_print_data_char(long *ptr, int start_byte, int size)
{
	int		cur_byte;

	cur_byte = start_byte;
	while (cur_byte < start_byte + 16 && cur_byte < size)
	{
		if (' ' <= (char)(*(ptr + cur_byte / 8) >> cur_byte * 8)
			&& (char)(*(ptr + cur_byte / 8) >> cur_byte * 8) <= '~')
		{
			ft_putchar(*(ptr + cur_byte / 8) >> cur_byte * 8);
		}
		else
		{
			ft_putchar('.');
		}
		cur_byte++;
	}
}

void	ft_print_data_hex(long *ptr, int start_byte, int size)
{
	int		cur_byte;

	cur_byte = start_byte;
	while (cur_byte < start_byte + 16)
	{
		if (cur_byte < size)
		{
			print_hex(*(ptr + cur_byte / 8) >> cur_byte * 8, 2);
		}
		else if (cur_byte % 16 != 0)
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (cur_byte % 2 == 1)
		{
			ft_putchar(' ');
		}
		cur_byte++;
	}
}

void	ft_print_memory(void *addr, int size)
{
	long	*ptr;
	int		cur_line;

	ptr = (long *)addr;
	cur_line = 0;
	while (cur_line * 16 < size)
	{
		print_hex((unsigned long)(ptr + cur_line * 2), 16);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_data_hex(ptr, cur_line * 16, size);
		ft_print_data_char(ptr, cur_line * 16, size);
		ft_putchar('\n');
		cur_line += 1;
	}
}

int	main(void)
{
	char	string[] = "Hello, World !!! :D ";
	ft_print_memory(&string, 99);
	return (0);
}
