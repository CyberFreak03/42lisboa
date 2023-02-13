/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:17:28 by rvaz              #+#    #+#             */
/*   Updated: 2023/02/02 17:59:23 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count_a;
	int	count_b;

	count_a = 0;
	count_b = 1;
	while (count_a < size)
	{
		while (count_b < size)
		{
			if (tab[count_a] > tab[count_b])
			{
				ft_swap(&tab[count_a], &tab[count_b]);
			}
			count_b++;
		}
		count_a++;
		count_b = count_a + 1;
	}
}

int	main()
{
	int a[] = {9, 5999, 1, 25, 986, 0};
	printf("%d, %d, %d, %d, %d, %d\n", a[0], a[1],  a[2], a[3], a[4], a[5]);
	ft_sort_int_tab(a, 6);
	printf("%d, %d, %d, %d, %d, %d\n", a[0], a[1],  a[2], a[3], a[4], a[5]);


}
