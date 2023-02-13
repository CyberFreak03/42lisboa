/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliferre <aliferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:05:01 by aliferre          #+#    #+#             */
/*   Updated: 2023/02/02 15:36:42 by aliferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		cur_char;

	cur_char = 0;
	while (*(src + cur_char) != '\0')
	{
		*(dest + cur_char) = *(src + cur_char);
		cur_char++;
	}
	*(dest + cur_char) = *(src + cur_char);
	return (dest);
}

//int	main(void)
//{
//	char	string1[] = "teste1";
//	char	string2[] = "teste2";

//	printf("===== Before ft_strcpy() =====\n");
//	printf("string1: %s\n", string1);
//	printf("string2: %s\n", string2);
//	printf("\n");
//	ft_strcpy(string1, string2);
//	printf("===== After ft_strcpy() =====\n");
//	printf("string1: %s\n", string1);
//	printf("string2: %s\n", string2);
//	printf("\n");
//	return (0);
//}
