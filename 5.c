#include<stdio.h>
void even(int a)
{
    if(a>1)
    even(a-1);
    printf("%d\n",2*a);

}
int main()
{
    int a ;
    printf("enter a number ");
    scanf("%d",&a);
    even(a);
    return 0;
}