/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:05:24 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:55:45 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		cur_char;

	cur_char = 0;
	while (*(str + cur_char) != '\0')
	{
		if ('A' <= *(str + cur_char) && *(str + cur_char) <= 'Z')
		{
			*(str + cur_char) += 'a' - 'A';
		}
		cur_char++;
	}
	return (str);
}

int	main(void)
{
	char	string[] = "Hello!";

	ft_strlowcase(string);
	return (0);
}
