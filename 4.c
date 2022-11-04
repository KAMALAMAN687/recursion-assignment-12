#include<stdio.h>
void reverseodd(int a);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    reverseodd(n);
    return 0;
}
void reverseodd(int a)
{
    
    printf("%d",2*a-1);
    if(a>1)
    reverseodd(a-1);
   


}  