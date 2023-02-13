/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:08:59 by rvaz              #+#    #+#             */
/*   Updated: 2023/02/02 17:58:22 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	up;
	int	down;

	up = 0;
	down = size - 1;
	while (down != size / 2)
	{
		temp = tab[up];
		tab[up++] = tab[down];
		tab[down--] = temp;
	}
}

int main()
{
	int a[5] = {1, 3, 6, 8, 10};
	printf("%d, %d, %d, %d, %d\n", a[0], a[1],  a[2], a[3], a[4]);
	ft_rev_int_tab(a, 5);
	printf("%d, %d, %d, %d, %d\n", a[0], a[1],  a[2], a[3], a[4]);
}

