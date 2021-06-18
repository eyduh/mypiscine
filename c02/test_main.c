#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
//#include "ex09/ft_strcapitalize.c"
//#include "ex10/ft_strlcopy.c"
//#include "ex11/ft_putstr_non_printable.c"

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
//char	*ft_strcapitalize(char *str);
//int		ft_strlen(char *str);
//void	ft_putstr_non_printable(char *str);






// EX00
int	main(void)
{
	char	*test_ret0;
	char	ft_dest0[15] = "111111111111111";
	char	*ft_test_ret0;
	char	dest0[15] = "111111111111111";
	char	*source0;

printf("\n\n\n\n EX00 || input this is a test\n\n");
	source0 = "This is a test";
	ft_test_ret0 = ft_strcpy(ft_dest0, source0);
	test_ret0 = strcpy(dest0, source0);
	printf("strpy %s\n", dest0);
	printf("ft_ft_strcpy: %s\n", ft_dest0);
	printf("strcmp: %d\n", strcmp(dest0, ft_dest0));
	printf("As numbers:\n");
	for(int i=0; i<15; i++)
	{
		printf("test_ret[%d]: %d && ", i, test_ret0[i]);
		printf("ft_test_ret[%d]: %d\n", i, ft_test_ret0[i]);
	}




//  EX01


printf("\n\n\n\n EX01 || inut length = 10, soruce1 = test \n\n");
	char	*source1;
	char	ft_dest1[15] = "111111111111111";
	char	*ft_test_ret1;
	char	dest1[15] = "111111111111111";
	char	*test_ret1;
	int		length1;

	length1 = 10;
	source1 = "test";
	ft_test_ret1 = ft_strncpy(ft_dest1, source1, length1);
	test_ret1 = strncpy(dest1, source1, length1);
	printf("strncpy: %s\n", dest1);
	printf("ft_strncpy: %s\n", ft_dest1);
	printf("strcmp %d\n", strcmp(test_ret1, ft_test_ret1));
	printf("As numbers, i < length:\n");
	for(int i=0; i<length1; i++)
	{
		printf("test_ret[%d]: %d && ", i, test_ret1[i]);
		printf("ft_test_ret[%d]: %d\n", i, ft_test_ret1[i]);
	}


// EX 02
printf("\n\n\n\n EX02 \n\n");

	char	*with_numbers2;	
	char	*only_alph2;

	with_numbers2 = "Str1ng";
	only_alph2 = "String";
	printf("Str1ng: %d\n", ft_str_is_alpha(with_numbers2));
	printf("String: %d\n", ft_str_is_alpha(only_alph2));
	printf("empty: %d\n", ft_str_is_alpha(""));


//  EX 03
printf("\n\n\n\n EX03\n\n");

	char	*with_numbers3;	
	char	*only_alph3;

	with_numbers3 = "T3st";
	only_alph3 = "123";
	printf("T3st: %d\n", ft_str_is_numeric(with_numbers3));
	printf("123: %d\n", ft_str_is_numeric(only_alph3));
	printf("empty: %d\n", ft_str_is_numeric(""));


//  EX 04
printf("\n\n\n\n EX04\n\n");

	char	*with_caps4;	
	char	*only_lower4;

	with_caps4 = "cAmEl";
	only_lower4 = "camel";
	printf("cAmEl: %d\n", ft_str_is_lowercase(with_caps4));
	printf("camel: %d\n", ft_str_is_lowercase(only_lower4));
	printf("empty: %d\n", ft_str_is_lowercase(""));


// EX 05
printf("\n\n\n\n EX05\n\n");

	char	*with_caps5;	
	char	*only_lower5;

	with_caps5 = "LoWER";
	only_lower5 = "UPPER";
	printf("LoWER: %d\n", ft_str_is_uppercase(with_caps5));
	printf("UPPER: %d\n", ft_str_is_uppercase(only_lower5));
	printf("empty: %d\n", ft_str_is_uppercase(""));



//  EX 06
printf("\n\n\n\n EX06\n\n");
	char	*with_caps6;	
	char	*only_lower6;

	with_caps6 = "Sp\30cial C\00ntrol";
	only_lower6 = "!!#$n0tSpE3cial??";
	printf("Sp\\30cial C\\00ntrol: %d\n", ft_str_is_printable(with_caps6));
	printf("!!#$n0tSpE3cial??: %d\n", ft_str_is_printable(only_lower6));
	printf("empty: %d\n", ft_str_is_printable(""));


// EX 07
printf("\n\n\n\n EX07\n\n");

	char	lower7[] = "lowercase string";
	char	*result7;

	result7 = ft_strupcase(lower7);
	printf("lowercase string: %s\n", result7);



//  EX 08
printf("\n\n\n\n EX08\n\n");

	char	upper8[] = "UPPERCASE STRING";
	char	*result8;

	result8 = ft_strlowcase(upper8);
	printf("UPPERCASE STRING: %s\n", result8);


/*
//  EX 09
printf("\n\n\n\n EX09\n\n");

	char	upper9[] = "begin, CAPS +plus, -min, 42getal &^gkjff.,GE g3tal .l.apart";
	char	*result9;

	result9 = ft_strcapitalize(upper9);
	printf("begin, CAPS +plus, -min, 42getal &^gkjff.,GE g3tal .l.apart: \n\n>>>>\n\n%s", result9);


// EX 10
printf("\n\n\n\n EX010 || input src = \"Testing 1.. 2..\", length = 15 \n\n");


	char	*source10;
	char	ft_dest10[15] = "XXXXXXXXXXXXXX";
	char	dest10[15] = "XXXXXXXXXXXXXX";
	int		test_length10;
	int		ft_length10;
	int		length10;

	length10 = 15;
	source10 = "Testing 1.. 2..";
	ft_length10 = ft_strlcpy(ft_dest10, source10, length10);
	test_length10 = strlcpy(dest10, source10, length10);
	
	printf("strlcpy: %d\n", test_length10);
	printf("ft_strlcpy: %d\n", ft_length10);
	printf("strcmp: %d\n", strcmp(dest10, ft_dest10));
	printf("As numbers while i < length\n");
	for(int i10=0; i10<length10; i10++)
	{
		printf("test_ret[%d]: %d && ", i10, dest10[i10]);
		printf("ft_test_ret[%d]: %d\n", i10, ft_dest10[i10]);
	}


//  EX 11
printf("\n\n\n\n EX11 || input \"Dit is\\n\\n een \\b\\r\\f test\\" \n\n ");


	char	*test11 = "Dit is\n\n een \b\r\f test";
	ft_putstr_non_printable(test11);
	printf("\n\n");*/
}

