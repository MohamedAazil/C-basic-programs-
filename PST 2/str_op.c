//Program for string operations 
#include <string.h>
#include<stdio.h>
int main ()
{
    char s1[10]="Hi",s2[20]="How are you???";

    printf("%d\n",strlen(s1));
    printf("%s\n",strlwr(s1));
    printf("%s\n",strupr(s2));
    printf("%s\n",strrev(s1));
    printf("%s\n",strcat(s1,s2));
    printf("%d\n",strcmp(s1,s2));
    printf("%s\n",strcpy(s1,s2));

}