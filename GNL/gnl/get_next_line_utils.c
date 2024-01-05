
#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	counter;

	if (!str)
		return (0);
	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*extract_line_with_break(char *str)
{
	char	*line;
	int		counter;

	counter = 0;
	while (str[counter] != '\n')
		counter++;
	line = (char *)malloc(sizeof(char) * (counter + 2));
	counter = 0;
	while (str[counter] != '\n')
	{
		line[counter] = str[counter];
		counter++;
	}
	line[counter++] = '\n';
	line[counter] = '\0';
	return (line);
}

char	*extract_line_with_no_break(char *str)
{
	char	*line;
	int		len_str;
	int		i;

	len_str = ft_strlen(str);
	line = (char *)malloc(sizeof(char) * (len_str + 1));
	i = 0;
	while (str[i])
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}
