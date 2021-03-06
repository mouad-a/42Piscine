#include <stdio.h>


void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	j = 1;
	while (j < size)
	{
		temp = tab[j];
		i = j - 1;
		while (tab[i] > temp && i >= 0)
		{
			tab[i + 1] = tab[i];
			i = i - 1;
		}
		tab[i + 1] = temp;
		j++;
	}
}
void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {10, 7, 8, 9, 1, 5};
	int size;
	
	size = 6;

	printf("Original: ");
	putarr(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}