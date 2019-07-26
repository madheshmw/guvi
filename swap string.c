#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],temp;
    int i,b=0;
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
            
         
        
    }
    printf("%s",a);
    return 0;
}
   