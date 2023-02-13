/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:02:47 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/07 18:24:45 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		is_alpha;
	int		cur_char;

	is_alpha = 1;
	cur_char = 0;
	while (is_alpha && *(str + cur_char) != '\0')
	{
		is_alpha *= (*(str + cur_char) >= 'a' && *(str + cur_char) <= 'z')
			+ ('A' <= *(str + cur_char) && *(str + cur_char) <= 'Z');
		cur_char++;
	}
	return (is_alpha);
}

int	main(void)
{
	char	string[] = "";

	printf("String: %s\n", string);
	printf("Is it alphabetic?: %d\n", ft_str_is_alpha(string));
	return (0);
}
