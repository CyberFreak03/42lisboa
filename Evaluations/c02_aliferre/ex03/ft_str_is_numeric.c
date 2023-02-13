/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:28:32 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:52:48 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		cur_char;
	int		is_num;

	cur_char = 0;
	is_num = 1;
	while (is_num && *(str + cur_char) != '\0')
	{
		is_num *= ('0' <= *(str + cur_char) && *(str + cur_char) <= '9');
		cur_char++;
	}
	return (is_num);
}

int	main(void)
{
	char	string[] = "12345";

	printf("String: %s\n", string);
	printf("Is it numeric?: %d\n", ft_str_is_numeric(string));
	return (0);
}
