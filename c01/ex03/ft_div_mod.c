/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:53:24 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/01 17:41:23 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*div;
// 	int	*mod;

// 	a = 42;
// 	b = 10;
// 	div = calloc(1, sizeof(int));
// 	mod = calloc(1, sizeof(int));
// 	ft_div_mod(a, b, div, mod);
// 	printf("a: %d, b: %d, div: %p, *div: %d, mod: %p, *mod: %d\n",
// 		a, b, div, *div, mod, *mod);
// 	return (0);
// }
