#include<stdio.h>
void binary(int a);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    binary(n);
    return 0;
}
void binary(int a)
{
    int c;
    if(a==1)
    printf("%d",a);
    else
    {
        if(a>1)
        {
            c=a%2;
            a=a/2;
            binary(a);
            printf("%d",c);
        }    
    }

}