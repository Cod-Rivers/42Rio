#include "printf.h"

void	ft_printp(unsigned long long n)
{
	if (!n)
		 (ft_putstr_fd("(nil)"));
	ft_putstr_fd("0x");
	base16(n);
}
	/*int main (void)
	{
	    int x = 46046;
	
	    binarios(x);
	    return 0;
	}*/
