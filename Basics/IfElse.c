//Check if a and b are odd or Even
#include <stdio.h>
int main(){
 int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a%2==0){
        printf("%d is Even\n",a);
    }
    else{
        printf("%d is Odd\n",a);
    }
    if(b%2==0){
        printf("%d is Even\n",b);
    }
    else{
        printf("%d is Odd\n",b);
    }
}