#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

bool check_base(char *str)
{
    char    *check;
    int     index;
    int     index2;
    
    check = str;
    if (str == 0 || ft_strlen(str) <= 1)
    {
        return(false);
    }
    while (*check)
    {
        if (*check == '\t' || *check == '\n' || *check == '\v' || *check == '\f'
            || *check == '\r' || *check == ' ' || *check == '+' || *check == '-')
            return (false);
        check++;
    }
	index = 0;

	while (index < check - str)
	{
		index2 = index + 1;
		while (index2 < check - str)
			if (str[index] == str[index2++])
				return (false);
		index++;
	}
	return (true);
}

void	ft_putnbr_base_recursive(int number, char *base, int radix)
{
	if (number == -2147483648)
	{
		ft_putnbr_base_recursive(number / radix, base, radix);
		write(1, &(base[-(number % radix)]), 1);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-number, base, radix);
		return ;
	}
	if (number > radix - 1)
		ft_putnbr_base_recursive(number / radix, base, radix);
	write(1, &(base[number % radix]), 1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int radix;

	if (!check_base(base))
		return ;
	radix = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, radix);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	// base binaria
	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
	ft_putnbr_base(47, "01");
	ft_putchar('\n');
	printf("Esperado: 101111\n");
	ft_putnbr_base(47, "\\/");
	ft_putchar('\n');
	printf("Esperado: /\\////\n");
	// base 5
	printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
	ft_putnbr_base(36, "01345");
	ft_putchar('\n');
	printf("Esperado: 131\n");
	ft_putnbr_base(36, "sd2ek");
	ft_putchar('\n');
	printf("Esperado: d2d\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
	ft_putnbr_base(INT_MIN, "0123456789");
	ft_putchar('\n');
	printf("Esperado: -2147483648\n");
	ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
	ft_putchar('\n');
	printf("Esperado: -;.]}]@\\{]@\n");
	// base 16
	printf("Bases 16, n = -65040. \"0123456789ABCDEF\" e \"jdlskmnMKZxVuzfa\"\n");
	ft_putnbr_base(-65040, "0123456789ABCDEF");
	ft_putchar('\n');
	printf("Esperado: -FE10\n");
	ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
	ft_putchar('\n');
	printf("Esperado: -afdj\n");
	// base 0 e base 1, nao pode aparecer nada
	printf("Bases 0 e 1, nao deve aparecer nada, n = 256.\n");
	ft_putnbr_base(-29092, "0");
	ft_putnbr_base(-29092, "");
	return (0);
}