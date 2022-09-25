#include<stdio.h>
void reversenatural(int n)
{
    if(n>0)
    {
    printf(" %d ",n);
    reversenatural(n-1);
    

    }
}
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    reversenatural(a);
    return 0;
}
