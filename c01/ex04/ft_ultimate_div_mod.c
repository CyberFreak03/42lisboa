/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:02:04 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/05 16:03:12 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	*a;
// 	int	*b;

// 	a = calloc(1, sizeof(int));
// 	b = calloc(1, sizeof(int));
// 	*a = 42;
// 	*b = 10;
// 	printf("a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
// 	ft_ultimate_div_mod(a, b);
// 	printf("a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
// 	return (0);
// }
