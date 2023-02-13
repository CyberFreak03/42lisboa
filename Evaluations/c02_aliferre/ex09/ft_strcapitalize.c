/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:14:10 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:56:09 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_alphanum(char character)
{
	return (('0' <= character && character <= '9')
		|| ('A' <= character && character <= 'Z')
		|| ('a' <= character && character <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int		cur_char;
	int		new_word;

	cur_char = 0;
	new_word = 1;
	while (*(str + cur_char) != '\0')
	{
		if (new_word && char_is_alphanum(*(str + cur_char)))
		{
			if ('a' <= *(str + cur_char) && *(str + cur_char) <= 'z')
				*(str + cur_char) += 'A' - 'a';
			new_word = 0;
		}
		else if (!new_word && 'A' <= *(str + cur_char)
			&& *(str + cur_char) <= 'Z')
			*(str + cur_char) += 'a' - 'A';
		else if (!char_is_alphanum(*(str + cur_char)))
			new_word = 1;
		cur_char++;
	}
	return (str);
}

int main(void)
{
	char	string[] = "hElLo wOrLd!";

	ft_strcapitalize(string);
	return (0);
}
