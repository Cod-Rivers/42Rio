#include "printf.h"

int    base10(int n)
	{
	    int    x;
	    int j;
	    int y;
	    int binary[32];
	
	    x = 0;
	    j = 0;
	    while (n != 0)
	    {
	    	x = (n % 10);
	    	binary[j] = x;
	    	n = n / 10;
	    	j++;
	    }   
	    while(j > 0)
	    { 
	    	y= 0;
        	y = binary[j - 1];  
			(ft_putnbr_fd(y));
	        j--;   
	    }
		return (*binary);
	}
	
	/*int main (void)
	{
	    int x = 46046;
	
	    base10(x);
	    return 0;
	}*/
