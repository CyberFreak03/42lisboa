/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:40:24 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/01 17:07:46 by glopes-b         ###   ########.fr       */
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

// int	main(void)
// {
// 	int	*a = calloc(1, sizeof(int));
// 	int	*b = calloc(1, sizeof(int));

// 	*a = 42;
// 	*b = 24;
// 	printf("Before:\n %p: %d, %p %d\n", a, *a, b, *b);
// 	ft_swap(a, b);
// 	printf("After:\n %p: %d, %p %d\n", a, *a, b, *b);
// 	return (0);
// }
