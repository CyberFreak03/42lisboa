/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:43:58 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:54:06 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		cur_char;
	int		is_upper;

	cur_char = 0;
	is_upper = 1;
	while (is_upper && *(str + cur_char) != '\0')
	{
		is_upper *= ('A' <= *(str + cur_char) && *(str + cur_char) <= 'Z');
		cur_char++;
	}
	return (is_upper);
}

int	main(void)
{
	char	string[] = "HELLO";

	printf("String: %s\n", string);
	printf("Is it uppercase?: %d\n", ft_str_is_uppercase(string));
	return (0);
}