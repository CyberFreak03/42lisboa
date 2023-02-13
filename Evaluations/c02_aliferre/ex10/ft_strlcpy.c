/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:32:13 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 16:56:26 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cur_char;
	int				src_size;

	cur_char = 0;
	while (*(src + cur_char) != '\0' && cur_char < size - 1)
	{
		*(dest + cur_char) = *(src + cur_char);
		cur_char++;
	}
	src_size = cur_char - 1;
	while (cur_char < size)
	{
		*(dest + cur_char) = '\0';
		cur_char++;
	}
	return (src_size);
}

int	main(void)
{
	char			string1[] = "abcde";
	char			string2[] = "12345";
	unsigned int	size = 6;

	printf("===== Before ft_strlcpy() =====\n");
	printf("string1: %s;\n", string1);
	printf("string2: %s;\n", string2);
	printf("\n");
	ft_strlcpy(string1, string2, size);
	printf("===== After ft_strlcpy() =====\n");
	printf("string1: %s;\n", string1);
	printf("string2: %s;\n", string2);
	printf("\n");
	return (0);
}
