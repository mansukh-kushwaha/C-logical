#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a and b to perform all airthmetic operations:\n");
    scanf("%d %d",&a,&b);
    //SUM
    c=a+b;
    printf("SUM of %d and %d is %d\n",a,b,c);
    //SUBTRACTION
    c=a-b;
    printf("SUBTRACTION of %d and %d is %d\n",a,b,c);
    //MULTIPLY
    c=a*b;
    printf("MULTIPLY of %d and %d is %d\n",a,b,c);
    //DIVIDE
    c=a/b;
    printf("DIVIDE of %d and %d is %d\n",a,b,c);
    return 0;
}