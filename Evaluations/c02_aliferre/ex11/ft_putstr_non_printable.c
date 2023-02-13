/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:07:04 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:57:42 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_to_hex(char character, char *hex)
{
	hex[0] = '\\';
	hex[1] = (character / 16) + '0';
	hex[2] = (character % 16) + '0';
	if (hex[1] > '9')
	{
		hex[1] += 'a' - ('9' + 1);
	}
	if (hex[2] > '9')
	{
		hex[2] += 'a' - ('9' + 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];
	int		cur_char;

	cur_char = 0;
	while (*(str + cur_char) != '\0')
	{
		if (*(str + cur_char) < ' ' || '~' < *(str + cur_char))
		{
			char_to_hex(*(str + cur_char), hex);
			write(1, hex, 3);
		}
		else
		{
			write(1, str + cur_char, 1);
		}
		cur_char++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}
