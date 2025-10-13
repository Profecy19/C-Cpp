#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("a<10 AND a==b: %d\n", (a<10) && (a==b));//AND operator
    printf("a<b OR a==b: %d\n", (a<b) || (a==b));//OR operator
    printf("NOT a==b: %d\n", !(a==b));//NOT operartor
    return 0;
}