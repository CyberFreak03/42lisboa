/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:34:49 by msilva-c          #+#    #+#             */
/*   Updated: 2023/02/09 13:52:55 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	c = argc - 1;
	while (c > 0)
	{
		i = 0;
		while (argv[c][i] != 0)
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c--;
	}
}