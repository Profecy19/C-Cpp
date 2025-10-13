#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Let a=%d and b=%d\n",a,b);
    printf("AND operator:%d\n",a&b);//AND operator
    printf("OR operator:%d\n",a|b);//OR operator
    printf("XOR operator:%d\n",a^b);//XOR operator
    printf("Left Shift operator:%d\n",a<<1);//Left Shift operator
    printf("Right Shift operator:%d\n",a>>1);//Right Shift operator
    return 0;
}