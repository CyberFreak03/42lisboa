/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberfreak <cyberfreak@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:25:19 by cyberfreak        #+#    #+#             */
/*   Updated: 2023/02/13 22:27:04 by cyberfreak       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool	is_in_str(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	is_space(char c)
{
	return (is_in_str(c, "\t\n\v\f\r "));
}

bool	is_operator(char c)
{
	return (is_in_str(c, "+-"));
}

bool	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	neg;
	int	result;

	neg =  1;
	result = 0;
	while (is_space(*str))
		str ++;
	while (is_operator(*str))
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (is_number(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * neg);
}

void	ft_atoi_like_test(char *str)
{
	int buff;
	int ft_buff;

	buff = atoi(str);
	ft_buff = ft_atoi(str);
	if (buff != ft_buff)
		printf("> KO, invalid int value returned. expected: %d got: %d\n", buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str);
	if (ft_buff != expected_result)
		printf("> KO, invalid int value returned expected: %d got: %d\n", expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

int		main(void)
{
	char *str;

	// quando o comportamento e igual ao de atoi
	str = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str);
	str = " \n \t\f\r \v -1234b67asd";
	ft_atoi_like_test(str);
	// quando o comportamento e diferente ao de atoi
	str = " \n \t \r \v --+-+-+-2147483648asd";
	ft_atoi_unlike_test(str, -2147483648);
	str = " \n \t\f\r \v -++-+-++1234b67asd";
	ft_atoi_unlike_test(str, -1234);
	return (0);
}













// void	ft_atoi_like_test(char *str)
// {
// 	int buff;
// 	int ft_buff;

// 	buff = atoi(str);
// 	ft_buff = ft_atoi(str);
// 	if (buff != ft_buff)
// 		printf("> KO %d, %d\n", buff, ft_buff);
// 	else
// 		printf("> OK. result: %d\n", ft_buff);
// }

// void	ft_atoi_unlike_test(char *str, int expected_result)
// {
// 	int ft_buff;

// 	ft_buff = ft_atoi(str);
// 	if (ft_buff != expected_result)
// 		printf("> KO,2\n");
// 	else
// 		printf("> OK, result: %d\n", ft_buff);
// }

// int		main(void)
// {
// 	char *str;

// 	// quando o comportamento e igual ao de atoi
// 	str = " \n \t \r \v +1234567asd";
// 	ft_atoi_like_test(str);
// 	str = " \n \t\f\r \v -1234b67asd";
// 	ft_atoi_like_test(str);
// 	// quando o comportamento e diferente ao de atoi
// 	str = " \n \t \r \v --+-+-+-2147483648asd";
// 	ft_atoi_unlike_test(str, -2147483648);
// 	str = " \n \t\f\r \v -++-+-++1234b67asd";
// 	ft_atoi_unlike_test(str, -1234);
// 	return (0);
// }