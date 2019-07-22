#include<stdio.h>
#include<conio.h> 
int main()
{
    char n;
    scanf("%c",&n);
    if(n>='a' && n<='z')
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
    return 0;
}