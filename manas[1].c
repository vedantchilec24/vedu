#include<stdio.h>

int main(){
    int num1, num2,mult=0;
    printf("enter first number\n");
    scanf("%d",&num1);
    printf("enter second number\n");
    scanf("%d",&num2);
    for(int i=0; i<num2; i++){
        mult=mult+num2;
    }
    printf("%d",mult);
    return 0;

}