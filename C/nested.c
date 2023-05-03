#include<stdio.h>
int main(){
    
    int a,b,c;
    printf("enter the numbers :");
    scanf("%d%d%d",&a,&b,&c);
    //find max

    if(a==b&& b==c)
    {
        printf("wrong input, numbers may not be same");
    }
     else if(a>=b){
        if(a>c){
            printf("max is a %d ",a);
        }
        else{
            printf("max is c %d ",c);
        }
    }
    else if(b>=c){
        printf("max is b %d ",b);
    }
    else{
          printf("max is c %d ",c);
    }

    
    return 0;
}