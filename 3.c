#include<stdio.h>
void odd(int a);
int main()
{
    int a;
    printf("enter number to print odd natural number");
    scanf("%d",&a);
    odd(a);
}
void odd(int a)
{
    if(a>1)
    odd(a-1);
    printf("%d\n",a);
    


}
