#include "libft.h"





int main(int argc, char **argv)
{
	// char *arr = " 42 hello world  42 ";
	//char *set = " \n \t 42";
	if (argc > 1)
	{
		printf("orig = %i\n", ft_isalnum(argv[1][0]));
		printf("orig = %i", isalnum(argv[1][0]));
	}
	ft_putnbr_fd(-2147483648, 1);
}
