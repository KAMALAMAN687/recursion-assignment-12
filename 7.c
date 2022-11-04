#include<stdio.h>
void reverseeven(int a)
{
    printf("%d",2*a);
    if(a>1)
    reverseeven(a-1);
}
int main()
{
    int a;
    printf("enter a number" );
    scanf("%d",&a);
    reverseeven(a);
    return 0;
}