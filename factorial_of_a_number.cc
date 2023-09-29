#include <stdio.h>
int factorial(int n)
{
    int a;
    return a=n*factorial(n-1);
}
int main()
{
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    f=factorial(n);
    printf("The factorial of %d is %d",n,f);
return 0;
}