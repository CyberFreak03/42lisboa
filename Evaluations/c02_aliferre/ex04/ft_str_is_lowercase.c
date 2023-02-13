/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:41:55 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:53:34 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		cur_char;
	int		is_lower;

	cur_char = 0;
	is_lower = 1;
	while (is_lower && *(str + cur_char) != '\0')
	{
		is_lower *= ('a' <= *(str + cur_char) && *(str + cur_char) <= 'z');
		cur_char++;
	}
	return (is_lower);
}

int	main(void)
{
	char	string[] = "hello";

	printf("String: %s\n", string);
	printf("Is it lowercase?: %d\n", ft_str_is_lowercase(string));
	return (0);
}
