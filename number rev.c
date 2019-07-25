#include <stdio.h>
 
int main()
{
   int n, reverse,sum, t;
 
   scanf("%d", &n);
 
   t = n;
 
   while (t != 0)
   {
      
      reverse=t%10;
      t = t/10;
      sum = sum*10 +reverse;
      
   }
 
   if (n== reverse)
      printf("%d\n",sum);
   else
      printf("%d\n",sum);
 
   return 0;
}

