/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:55:47 by jealves-          #+#    #+#             */
/*   Updated: 2023/02/09 16:20:37 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	count_param_name;
	int	count_param;

	count_param = argc - 1;
	while (count_param > 0)
	{
		count_param_name = 0;
		while (argv[count_param][count_param_name] != '\0' && argc)
		{
			ft_putchar(argv[count_param][count_param_name]);
			count_param_name++;
		}
		ft_putchar('\n');
		count_param--;
	}
	return (0);
}
