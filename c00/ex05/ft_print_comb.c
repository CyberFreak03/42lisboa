/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:44:36 by glopes-b          #+#    #+#             */
/*   Updated: 2023/01/31 16:15:48 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	m;

	i = '0' - 1;
	while (++i <= '9')
	{
		j = i;
		while (++j <= '9')
		{
			m = j;
			while (++m <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &m, 1);
				if (i != '7')
					write(1, ", ", 2);
			}
		}
	}
}

// int main()
// {
// 	ft_print_comb();
// }