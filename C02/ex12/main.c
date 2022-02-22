/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:29:27 by moabid            #+#    #+#             */
/*   Updated: 2022/02/05 12:15:34 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *newadd(void *addr)
{
    char* new_first_add;
 	char* caddr;
 	caddr = (char*)addr;
	int i;
	int j;

	i = 0;
	j = 2;
	while (i != '\0')
	{
		new_first_add[i] = caddr[j];
		i++;
		j++;
	}
	new_first_add[i] = '\0';

    return new_first_add;
}


void writter(char *new_first_add)
{
	char *hex;

    hex = "0123456789ABCDEF";

	write(1, new_first_add, 9);
	write(1, ": ", 2);
    if(ch < 16)
    {
        write (1,&hex[ch],1);
    }
    else
    {
        convert_tohex(ch/16);
        convert_tohex(ch%16);    
    }
}


void *ft_print_memory(void *addr, unsigned int size)
{
	char *new_first_add;
	char *hex;
	char *str;

	new_first_add = (char*)pointer_convert(addr);
	writter(new_first_add);

}

int main(void)
{

	return 0;
}