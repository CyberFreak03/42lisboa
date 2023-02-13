/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:51:30 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/04 17:28:11 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		cur_char;

	cur_char = 0;
	while (*(src + cur_char) != '\0' && cur_char < n)
	{
		*(dest + cur_char) = *(src + cur_char);
		cur_char++;
	}
	while (cur_char < n)
	{
		*(dest + cur_char) = '\0';
		cur_char++;
	}
	return (dest);
}

int	main(void)
{
	char	string1[] = "abcde";
	char	string2[] = "12345";
	int		size = 3;

	printf("===== Before ft_strncpy() =====\n");
	printf("string1: %s;\n", string1);
	printf("string2: %s;\n", string2);
	printf("\n");
	ft_strncpy(string1, string2, size);
	printf("===== After ft_strncpy() =====\n");
	printf("string1: %s;\n", string1);
	printf("string2: %s;\n", string2);
	printf("\n");
	return (0);
}

