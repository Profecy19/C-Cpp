#include <stdio.h>
int main(){
    int till,sum=0;
    printf("Enter till which you want sum of even numbers: ");
    scanf("%d",&till);
    for(int i=1;i<=till;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("Sum of even numbers till %d is %d\n",till,sum);
}