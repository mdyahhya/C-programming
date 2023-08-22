#include<stdio.h>
#define pf printf

int main()
{
   int n;
   pf("Enter a number: ");
   scanf("%d", &n);
   pf("Reverse multiplication table of %d:\n", n);
   for(int i=10; i>=1; i--)
   {
      pf("%d x %d = %d\n", n, i, n*i);
   }
   return 0;
}