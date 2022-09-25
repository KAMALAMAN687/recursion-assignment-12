#include<stdio.h>
void printnatural(int n);
int main()
{int a;
printf("enter a number : ");
scanf("%d",&a);
printnatural(a);
return 0;

}
void printnatural(int n)
{
    if(n>0)
    {
        printnatural(n-1);
        printf(" %d ",n);
    }    
}