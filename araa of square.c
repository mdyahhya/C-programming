#include<stdio.h>

int saquare()
{
    int s,a;
    printf("Enter side :");
    scanf("%d",&s);
    a= s * s;
    printf("area : %d\n",a);
    return 0;
}
int main() 
{
    saquare();
    return 0;
}