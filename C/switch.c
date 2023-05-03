#include <stdio.h>
int main()
{

    // calculator
    // num1 num2 --> operation

    int a = 4, b = 3;
    printf("%d\t%d\n", a, b);
    int option;
    printf("enter your choice");
    scanf("%d", &option);
    int ans;
    switch (option)
    {
    case 1:
        ans = a + b;
        printf("Ans is : %d", ans);
        break;
    case 2:
        ans = a * b;
        printf("Ans is : %d", ans);
        break;
    case 3:
        ans = a / b;
        printf("Ans is : %d", ans);
        break;
    case 4:
        ans = a % b;
        printf("Ans is : %d", ans);
        break;
    case 5:
        ans = a+= b;
        printf("Ans is : %d", ans);
        break;
    case 6:
        ans = ++a;
        printf("Ans is : %d", ans);
        break;
    case 7:
        ans = a++;
        printf("Ans is : %d", ans);
        break;
    case 8:
        ans = ~a ;
        printf("Ans is : %d", ans);
        break;
    case 9:
        ans = a || b;
        printf("Ans is : %d", ans);
        break;
    case 10:
        ans = a & b;
        printf("Ans is : %d", ans);
        break;

    default:
        break;
    }
    return 0;
}