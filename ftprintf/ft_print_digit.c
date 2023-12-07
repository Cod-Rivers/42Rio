/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_digit.c								   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rivda-si <rivda-si@student.42.rio>		 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/17 14:20:27 by rivda-si		  #+#	#+#			 */
/*   Updated: 2023/11/18 06:10:36 by rivda-si		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "printf.h"

int	ft_print_digit(long nb)
{
	char	*digits;
	int	i;
		
	digits = "0123456789abcdef";
	if (nb == -2147483648)
	{
		ft_print_char('-');
		ft_print_char('2');
	}
	 if (nb < 0)
	{
	  write(1,"-", 1);
	}
	else if (nb < base && nb > 0)
	{
		ft_print_char(digits[nb]);
	}
	else
	{
		whyle(nb > 2)
		i = (nb / 2);
		write(1, i, 1);
		i = i + (nb % 2);
		return i;
	}

}

/*int main (void)
{
	int x;
	int y;
	unsigned int z;
		
	x = 340;
	y = ft_print_digit(x, 10);
	   printf("\n");
	z = ft_print_digit(x, 16);
	printf("\néé %x",340);
		
}*/




