//String concadenation using c

//using loop
/*
#include<stdio.h>
int main()
{
    char first[20]; // char array decleration for the first name. 
    char second[20]; // char array decleration for the second name.
    int i;
    printf("enter the first string:");
    scanf("%s",first);
    printf("Enter the second string:");
    scanf("%s",second);
    for(i=0;first[i]!='\0';i++);
    first[i]=' ';
    i=i+1;
    for(int j=0;second[j]!='\0';j++)
    {
        first[i]=second[j];
        i++;
    }

    first[i]='\0';
    printf("After the joining the string is:%s",first);
    return 0;
}
*/

//using pointer
/*
#include<stdio.h>
int main()
{
    char first[20];
    char second[20];
    int i=0;
    int j=0;
    char *str1;
    char *str2;
    str1=first;
    str2=second;
    printf("enter the first string:");
    scanf("%s",first);
    printf("Enter the second string:");
    scanf("%s",second);
    while(first[i]!='\0')
    {
        ++str1;
        i++;
    }
    while(second[i]!='\0')
    {
        *str1=*str2;
        str1++;
        str2++;
        j++;
    }
    printf("the joined string is:%s",first);
    return 0;
}
*/
// using function
#include<stdio.h>
#include<string.h>
int main()
{
    char first[20]; // char array decleration for the first name. 
    char second[20]; // char array decleration for the second name.
    printf("enter the first string:");
    scanf("%s",first);
    printf("Enter the second string:");
    scanf("%s",second);
    strcat(first,second);
    printf("the joined string is:%s",first);
    return 0;
}