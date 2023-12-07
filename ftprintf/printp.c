#include "printf.h"

int	ft_printp(unsigned long long n)
{
	if (!n)
		return (ft_putstr_fd("(nil)"));
	return (ft_putstr_fd("0x") + base16(n));
}
/*int main (void)
{
    int x = 46046;
	
    ft_printp(x);
    return 0;
}*/
