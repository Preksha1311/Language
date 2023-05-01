#include<stdio.h>
int main()

{
    int a,b;
    int p=printf("Enter two numbers\n");
    // printf("%*d",16,p);
    scanf("%d%d",&a,&b);

    int n;
    n= printf("%*c%*c",a,"*",b,"9");
    printf("%d",n);
    return 0;
    
}