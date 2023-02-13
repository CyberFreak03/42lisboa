/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:54:14 by msilva-c          #+#    #+#             */
/*   Updated: 2023/02/12 04:12:17 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	swap(char **s1, char **s2)
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
	while (s1[i] && s1[i] == s2[i])
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
		swap(&argv[c], &argv[d]);
		c++;
	}
	c = 1;
	while (c < argc)
	{
		put(argv[c]);
		write(1, "\n", 1);
		c++;
	}
}
