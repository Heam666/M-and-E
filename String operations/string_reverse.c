#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char string[20];
    char correct[20];
    printf("Enter the string:");
    scanf("%[^\n]s",string);
    //scanf("%s",string);// String acceptence without the spaces. 
    for(i=0;string[i]!='\0';i++);
    for(int j=0;j<=strlen(string);j++)
    {
        --i;
        correct[j]=string[i];
    }
    printf("reverse is:%s",correct);
    return 0;
}