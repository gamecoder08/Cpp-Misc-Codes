#include<stdio.h>
int process(int* ptra, int* ptrb)
{
    int add,sub;
    add= *ptra + *ptrb;
    sub= *ptra - *ptrb;
    *ptra=add;
    *ptrb=sub;
}
int main()
{
    int a,b;
    printf(" Enter your values \n");
    scanf("%d",&a);
    scanf("%d",&b);
    process(&a,&b);
    printf("The Numbers are %d and %d",a,b);
    return 0;
}