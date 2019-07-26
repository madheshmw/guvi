#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int i,j,c=0,d=0,count=0,t=0;
    scanf("%s%s",&a,&b);
    c=strlen(a);
    d=strlen(b);
    for(i=0;i<=c;i++)
    {
        for(j=i+1;j<=c;j++)
        {
            if(a[i]==a[j])
            {
                count=1;
                break;
                
            }
        }
    }
    for(i=0;i<=d;i++)
    {
        
        for(j=i+1;j<=d;j++)
        {
            if(b[i]==b[j])
            {
                t=1;
                break;
                
            }
        }
    }
    if(count==t)
    printf("s");
    else
    printf("n");
    return 0;
    
}