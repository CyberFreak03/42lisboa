/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:04:41 by jealves-          #+#    #+#             */
/*   Updated: 2023/02/09 16:31:39 by jealves-         ###   ########.fr       */
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

	count_param = 1;
	while (count_param < argc)
	{
		count_param_name = 0;
		while (argv[count_param][count_param_name] != '\0')
		{
			ft_putchar(argv[count_param][count_param_name]);
			count_param_name++;
		}
		ft_putchar('\n');
		count_param++;
	}
	return (0);
}
