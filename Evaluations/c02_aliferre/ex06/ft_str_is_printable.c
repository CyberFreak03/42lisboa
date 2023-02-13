/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:52:30 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:54:52 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		cur_char;
	int		is_print;

	cur_char = 0;
	is_print = 1;
	while (is_print && *(str + cur_char) != '\0')
	{
		is_print *= (' ' <= *(str + cur_char) && *(str + cur_char) <= '~');
		cur_char++;
	}
	return (is_print);
}

int	main(void)
{
	char	string[] = "Ab 3!";

	printf("String: %s\n", string);
	printf("Is it printable?: %d\n", ft_str_is_printable(string));
	return (0);
}