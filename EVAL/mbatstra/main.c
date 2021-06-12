#include <unistd.h>

//void	ft_ft(int *nbr);
//void	ft_ultimate_ft(int *********nbr);
//void	ft_swap(int *a, int *b);
//void	ft_div_mod(int a, int b, int *div, int *mod);
//void	ft_ultimate_div_mod(int *a, int *b);
//void	ft_putstr(char *str);
//int	ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
//void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
/*	 
	//ex00
	int	i;
	char c;
	ft_ft(&i);
	c = i;
	if (c == '*')
	{
		write(1, "42", 2);
	}
	else
	{
		write(1, "wrong", 5);
	}
*/		
/*	
	//ex01
	int	nbr;
	int	*pnbr1;
	int	**pnbr2;
	int	***pnbr3;
	int	****pnbr4;
	int	*****pnbr5;
	int	******pnbr6;
	int	*******pnbr7;
	int	********pnbr8;
	int	*********pnbr9;
	
	pnbr1 = &nbr;
	pnbr2 = &pnbr1;
	pnbr3 = &pnbr2;
	pnbr4 = &pnbr3;
	pnbr5 = &pnbr4;
	pnbr6 = &pnbr5;
	pnbr7 = &pnbr6;
	pnbr8 = &pnbr7;
	pnbr9 = &pnbr8;
	ft_ultimate_ft(pnbr9);
	if (nbr == 42)
	{
		write(1, "fuck yeah", 9);
	}
	else
	{
		write(1, "wrong", 5);
	}
*/	
/*
	// ex02
	int	i;
	int	j;
	char ci;
	char cj;
	
	i = 1;
	j = 5;
	ft_swap(&i, &j);
	ci = '0' + i;
	cj = '0' + j;
	write(1, &ci, 1);
	write(1, &cj, 1);
*/	
/*
	// ex03
	int		a;
	int		b;
	int		div;
	int		mod;
	char	cdiv;
	char	cmod;

	a = 17;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	cdiv = '0' + div;
	cmod = '0' + mod;
	write(1, "div: ", 5);
	write(1, &cdiv, 1);
	write(1, " mod: ", 6);
	write(1, &cmod, 1);
*/	
/*
	// ex04
	int		a;
	int		b;
	char	cdiv;
	char	cmod;

	a = 27;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	cdiv = '0' + a;
	cmod = '0' + b;
	write(1, "div: ", 5);
	write(1, &cdiv, 1);
	write(1, " mod: ", 6);
	write(1, &cmod, 1);
*/
/*
	// ex05
	char	str[] = "hello";
	
	ft_putstr(&str[0]);
*/
/*
	// ex06
	char	str[] = "hello";
	char	c;
	int		len;

	len = ft_strlen(&str[0]);
	c = '0' + len;
	write(1, &c, 1);
*/	
/*	
	// ex07
	int		len = 7;
	int		tab[7] = {1, 2, 3, 4, 5, 6, 7};
	char	num[len];
	int		i = 0;

	ft_rev_int_tab(&tab[0], len);
	while (i < len){
		num[i] = '0' + tab[i];
		write(1, &num[i], 1);
		i++;
	}
*/
	/*
	// ex08
	int		len = 7;
	int		tab[7] = {3, 6, 1, 4, 2, 7, 5};
	char	num[len];
	int		i = 0;
​
	ft_sort_int_tab(&tab[0], len);
	while (i < len){
		num[i] = '0' + tab[i];
		write(1, &num[i], 1);
		i++;
	}
	*/
	return (0);
}
