#include "printf.h"

static void verify_index(int index)
{
    if (index == 10)
        ft_print_char('a');
    else if (index == 11)
        ft_print_char('b');
    else if (index == 12)
        ft_print_char('c');
    else if (index == 13)
        ft_print_char('d');
    else if (index == 14)
        ft_print_char('e');
    else if (index == 15)
        ft_print_char('f');         
}
void    base16(unsigned long long n)
	{
	    int    x;
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
            ft_putnbr_fd(y);
	        j--;
          }
	    }
	}
	
	/*int main (void)
	{
	    int x = 46046;
	
	    binarios(x);
	    return 0;
	}*/
