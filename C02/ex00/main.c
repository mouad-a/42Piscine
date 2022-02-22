#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int ind;

	ind = 0;
	while (src[ind] != '\0')
	{
		dest[ind] = src[ind];
		ind++;
	}
	dest[ind] = '\0';
	return (dest);
}

int main(void) {
	char *str;
	char buffer[19];

	str = ft_strcpy(buffer, "smth");
	printf("%s", str);
	return 0 ;
}
