#include <stdio.h>
#include <string.h>  

extern char *ft_strstr(char *str, char *to_find);

int main()
{
    char s1[30] = "wwo i don't kwopwow"; 

    char *ptr = strstr(s1, "wow");
 	char *ptr2 = ft_strstr(s1, "wow");	
	char *ptr3 = strstr(s1, "aaa");
 	char *ptr4 = ft_strstr(s1, "aaa");
    char *ptr5 = strstr(s1, "");
 	char *ptr6 = ft_strstr(s1, "");	
    char *ptr7 = strstr(s1, "don");
 	char *ptr8 = ft_strstr(s1, "don");
	
    printf("%s\n", ptr);  
	printf("%s\n",ptr2);
    printf("%s\n", ptr3);  
	printf("%s\n",ptr4);
    printf("%s\n", ptr5);  
	printf("%s\n",ptr6);
 	printf("%s\n", ptr7);  
	printf("%s\n",ptr8);
    return 0;
}
