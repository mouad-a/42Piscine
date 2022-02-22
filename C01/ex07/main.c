#include <stdio.h>


void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size)
	{
		temp = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = temp;
		size--;
		i++;
	}
}


int		main(void)
{
    printf(" (printed) should be 1");
    ft_putnbr(1);
    printf("\n (printed) should be 0");
    ft_putnbr(0);
    printf("\n (printed) should be -1");
    ft_putnbr(-1);
    printf("\n (printed) should be 2147483647");
    ft_putnbr(2147483647);
    printf("\n (printed) should be -21474836478");
    ft_putnbr(-2147483648);
    printf("\n");
    return (0);
}