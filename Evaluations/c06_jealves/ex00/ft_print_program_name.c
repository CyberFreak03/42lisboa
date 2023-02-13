/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:55:39 by jealves-          #+#    #+#             */
/*   Updated: 2023/02/09 16:30:57 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	count;

	count = 0;
	while (argv[0][count] != '\0' && argc)
	{
		ft_putchar(argv[0][count]);
		count++;
	}
	ft_putchar('\n');
	return (0);
}
