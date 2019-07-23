#include<stdio.h>
#include<conio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
     while(n)
    {
     n=n/10;
     c++;
    }
    printf("%d",c);
    return 0;
}   