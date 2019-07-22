#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("even");
        
    }
    else
    {
        printf("odd");
    }
    if(n<0)
    {
        printf("invalid");
    }
    return 0;
}
