#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str);
char    *ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char    *ft_strstr(char *str, char *to_find);
int     ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char 	*ft_strupcase(char *str);
char 	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, int nb);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putnbr_base(int nbr, char *base);
int ft_atoi_base(char *str, char *base);
void ft_putstr_non_printable(char *str);
void *ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	/*
	 * ex02 atoi
	 *
	char  *s;
	s = " aa 23 aa";
	printf("string: %s  ft_atoi: %d  atoi: %d\n", s, ft_atoi(s), atoi(s));
	
	s = " -158 -23";
	printf("string: %s  ft_atoi: %d  atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "abc 22 abc";
	printf("string: %s  ft_atoi: %d  atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "abc 22 abc";
	printf("string: %s  ft_atoi: %d  atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "2147483647";
	printf("string: %s  ft_atoi: %d  atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "-2147483648";
	printf("string: %s  ft_atoi: %d  atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "0";
	printf("string: %s  ft_atoi: %d  atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "1";
	printf("string: %s  ft_atoi: %d  atoi: %d\n", s, ft_atoi(s), atoi(s));
	
	*/
	
	/*
	 * ex03 ft_strcpy
	 *

	char s1[] = "abcdef";
	char s2[] = "      ";
	
	ft_strcpy(s1, s2);
	printf("s1=%s  s2=%s", s1, s2);
	*/
	
	/*
	 * ex04 ft_strncpy
	 *

	char s1[] = "abcdef";
	char s2[8];

	ft_strncpy(s2, s1, 3);
	

	int i = 0;
	while (i <= 8)
	{
		printf("i=%d s2[i]=%x\n", i, s2[i]);

		i++;
	}
	*/
	
	/*
	 * ex05 ft_strstr
	 *
	char s1[] = "Salut je m'appelle Theo.";
	char s2[] = "je";

	printf("%s", ft_strstr(s1, s2));
	printf("%s", strstr(s1, s2));
	*/
	
	/*
	 * ex06 strncmp
	 *
	char s1[] = "bonjour";
	char s2[] = "bonjour ";

	printf("%d", ft_strcmp(s2, s1));
	*/
	
	/*
	 * ex7 strncmp
	 *
	char s1[] = "bonjour";
	char s2[] = "bonjour ";
	
	printf("%d\n", strncmp(s2, s1, 40));
	printf("%d\n", ft_strncmp(s2, s1, 40));
	*/

	/*
	 * ex08 ftstrupcase
	 *
	char s1[] = "abcDef";
	printf("%s", ft_strupcase(s1));
	*/
	
	/*
	 * ex09 ft_strlowcase
	 *
	char s1[] = "ABCdef";
	printf("%s", ft_strlowcase(s1));
	*/
	
	/*
	 * ex10 ft_strcapitalize
	 *
	char s1[] = "salut,comment tu vas?42motsquarante-deux;cinquante+et+un";
	printf("%s", ft_strcapitalize(s1));
	*/

	/*
	 * ex11 ft_str_is_alpha
	 *
	char s1[] = "lololdkfijsjfjzzzaaa";
	char s2[] = "lololdkfijsjfjz'zzaaa";

	printf("%d\n", ft_str_is_alpha(s1));
	printf("%d", ft_str_is_alpha(s2));
	*/
	
	/*
	 * ex12 ft_str_is_numeric
	 *
	char s1[] = "02154563151";
	char s2[] = "15554564\\454";
	char s3[] = "";

	printf("%d\n", ft_str_is_numeric(s1));
	printf("%d\n", ft_str_is_numeric(s2));
	printf("%d", ft_str_is_numeric(s3));
	*/
	
	/*
	 * ex13 ft_str_is_lowercase
	 *

	char s1[] = "dshdhsazazsjd";
	char s2[] = "fdsfdsazazZAZAZfdsf";
	char s3[] = "54455454SDSDAZAfdkodk";
	char s4[] = "";

	printf("%d\n", ft_str_is_lowercase(s1));
	printf("%d\n", ft_str_is_lowercase(s2));
	printf("%d\n", ft_str_is_lowercase(s3));
	printf("%d\n", ft_str_is_lowercase(s4));
	*/
	
	/*
	 * ex14 ft_str_is_uppercase
	 *
	char s1[] = "FDGHGFHDGHFGD";
	char s2[] = "FDHJFHJDHjdfhjdfHJFJDH";
	char s3[] = "DFJHDFH145";
	char s4[] = "";

	printf("%d\n", ft_str_is_uppercase(s1));
	printf("%d\n", ft_str_is_uppercase(s2));
	printf("%d\n", ft_str_is_uppercase(s3));
	printf("%d\n", ft_str_is_uppercase(s4));

	*/
	
	/*
	 * ex15 ft_str_is_printable
	 *
	char s1[] = "FDGHdfhdf9090()()^^^^$$%";
	char s2[] = "FDHJFHJDHjdf\vhjdfHJ";
	char s3[] = "DFJHDFH145";
	char s4[] = "";

	printf("%d\n", ft_str_is_printable(s1));
	printf("%d\n", ft_str_is_printable(s2));
	printf("%d\n", ft_str_is_printable(s3));
	printf("%d\n", ft_str_is_printable(s4));
	*/

	/*
	 * ex16 ft_strcat
	 *

	char src[50], dest[50];

    strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	
	printf("Final destination string : |%s|\n", strcat(dest, src));

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	printf("Final destination string : |%s|\n", ft_strcat(dest, src));
	*/
	
	/*
	 * ex17 ft_strncat
	 *

	char src[50], dest[50];

    strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	
	printf("Final destination string : |%s|\n", strncat(dest, src, 4));

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	printf("Final destination string : |%s|\n", ft_strncat(dest, src, 4));

	*/
	}