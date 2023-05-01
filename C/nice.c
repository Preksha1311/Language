#include<stdio.h>
int main(){
    double A,B;
    printf("enter two number");
    scanf("%lf%lf2",&A,&B);
    printf("no. is %lf and %lf ",A,B);
    long double mul=0;
    mul=A*B;
    printf("Multiplication of %lf and %lf: %Lf",A,B,mul);
}
