#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    int n;
    n= printf("%*c%*c",a," ",b," ");
    printf("%d",n);
    return 0;
    
}