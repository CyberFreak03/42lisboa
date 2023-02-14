/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:50:26 by rafamart          #+#    #+#             */
/*   Updated: 2023/02/14 18:06:19 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//int	main(int ac, char **av)
//{
//	int	j;
//
//	j = ac - 1;
//	while (j > 0)
//	{
//		write(1, av[j], ft_strlen(av[j]));
//		write(1, "\n", 1);
//		j--;
//	}
//	return (0);
//}

int	main(int ac, char **av)
{
	ac--;
	while (ac > 0)
	{
		write(1, av[ac], ft_strlen(av[ac]));
		write(1, "\n", 1);
		ac--;
	}
	return (0);
}
