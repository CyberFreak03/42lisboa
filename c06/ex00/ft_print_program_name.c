/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:13:57 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/14 19:15:44 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	while (argv[0][n] != 0 && argc != 0)
	{
		write(1, &argv[0][n], 1);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}
