#include<stdio.h>

int sum(int a,int b);


int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);

    printf("enter the second number:");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("the value of s is %d :",s);


return 0;
}
int sum(int a,int b){
    return a+b;
}