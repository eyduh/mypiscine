#include <unistd.h>
#include "../c01/ex05/ft_putstr.c"

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char	*dest ;
	char	*src ;
	
	*dest = "boo" ;
	*src = "hello" ;
	ft_strcpy(dest, *src);
	ft_putstr(*dest);	
}
