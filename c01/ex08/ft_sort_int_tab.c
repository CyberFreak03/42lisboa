/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:07:38 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/02 18:34:12 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	ntmp;

	ntmp = *a;
	*a = *b;
	*b = ntmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	v1;
	int	v2;

	v1 = 0;
	v2 = 1;
	while (v1 < size)
	{
		while (v2 < size)
		{
			if (tab[v1] > tab[v2])
			{
				ft_swap(&tab[v1], &tab[v2]);
			}
			v2++;
		}
		v1++;
		v2 = v1 + 1;
	}
}

// int	main(void)
// {
// 	int *tab;
// 	int counter;

// 	srand(1);
// 	counter = 0;
// 	tab = calloc(10, sizeof(int));
// 	while (counter < 10)
// 	{
// 		tab[counter] = rand() % 100;
// 		counter++;
// 	}
// 	counter = -1;
// 	while (9 > counter++)
// 		printf("%d ", tab[counter]);
// 	ft_sort_int_tab(tab, 10);
// 	printf("%c", '\n');
// 	counter = -1;
// 	while (9 > counter++)
// 		printf("%d ", tab[counter]);
// 	printf("%c", '\n');
// 	return (0);
// }
