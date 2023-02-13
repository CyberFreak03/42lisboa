/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:19:21 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:55:13 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		cur_char;

	cur_char = 0;
	while (*(str + cur_char) != '\0')
	{
		if ('a' <= *(str + cur_char) && *(str + cur_char) <= 'z')
		{
			*(str + cur_char) += 'A' - 'a';
		}
		cur_char++;
	}
	return (str);
}

int	main(void)
{
	char	string[] = "Hello!";

	ft_strupcase(string);
	return (0);
}
