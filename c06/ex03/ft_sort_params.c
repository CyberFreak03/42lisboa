/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:14:34 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/14 19:52:02 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	swapstr(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	compare(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[2])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(int argc, char *argv[])
{
	int	c;
	int	d;
	int	e;

	c = 1;
	while (c < argc)
	{
		d = c;
		e = c;
		while (e < argc)
		{
			if (compare(argv[d], argv[e]) > 0)
				d = e;
			e++;
		}
		swapstr(&argv[c], &argv[d]);
		c++;
	}
	c = 1;
	while (c < argc)
	{
		putchar(argv[c]);
		write(1, "\n", 1);
		c++;
	}
}
