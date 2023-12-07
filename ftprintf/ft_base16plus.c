#include "printf.h"

static int verify_index(int index)
{
	if (index > 15)
		return (1);
	if (index == 10)
		return ft_print_char('A');
	else if (index == 11)
		return ft_print_char('B');
	else if (index == 12)
		return ft_print_char('C');
	else if (index == 13)
		return ft_print_char('D');
	else if (index == 14)
		return ft_print_char('E');
  
	return ft_print_char('F');	 
}
int   binariosup(unsigned long n)
	{
		int x;
		int j;
		int y;
		int binary[32];
	
		x = 0;
		j = 0;
		while (n != 0)
		{
			x = (n % 16);
			binary[j] = x;
			n = n / 16;
			j++;
		}   
		while(j > 0)
		{ 
			y= 0;
			y = binary[j - 1];
			if (y > 9)
			{
				verify_index(y);
				j--;
			}		
			else
			{
				(ft_putnbr_fd(y));
				j--;
			}
		}
		return (*binary);
	}
	
	/*int main (void)
	{
		int x = -46046;
	
		binariosup(x);
		printf("\n");
		printf("%X", -46046);
		return 0;
	}*/
