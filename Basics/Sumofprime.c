#include <stdio.h>
int main(){
    int num1,sum=0;
    printf("Enter the number till which you want sum of prime numbers: ");
    scanf("%d",&num1);
    printf("Sum of prime numbers till %d = 0",num1);
    for(int ini=2;ini<=num1;ini++){
        int prime=1;
        for(int by=2;by*by<=ini;by++){
            if (ini%by==0){
                prime=0;
                break;
            }
        }
        if (prime==1){
            printf("+%d",ini);
            sum+=ini;
        }
    }
    printf(" \n= %d\n",sum);
    return 0;
}