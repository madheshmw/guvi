#include <stdio.h>
int main()
{
    int low, high, i, flag,c=0;
    scanf("%d %d", &low, &high);
    while (low < high)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        c++;
           
        ++low;
    }
     printf("%d ", c);
    return 0;
}