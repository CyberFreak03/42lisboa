/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:58:56 by rvaz              #+#    #+#             */
/*   Updated: 2023/02/02 17:57:07 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	leng;

	leng = 0;
	while (str[leng] != 0)
	{	
		leng++;
	}
	return (leng);
}

int	main()
{
	int a = ft_strlen("hey mister 42");
	printf("%d", a);
}

