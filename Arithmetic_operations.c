#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum:%d
",c);
    c=a-b;
    printf("Difference:%d
",c);
    c=a*b;
    printf("Product:%d
",c);
    c=a/b;
    printf("Quotient:%d
",c);
    c=a%b;
    printf("Remainder:%d
",c);
}