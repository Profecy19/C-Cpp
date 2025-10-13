#include <stdio.h>
int main(){
    printf("Performing Arithmatic Operations\n");
    //addition
    int var1=43,var2=76;
    printf("Adding %d and %d:\n%d+%d=%d\n\n",var1,var2,var1,var2,var1+var2);
    //Substraction
    printf("Substracting %d from %d:\n%d-%d= %d\n\n",var2,var1,var2,var1,var2-var1);
    //Multiplication
    printf("Multiplying %d and %d:\n%d X %d = %d\n\n",var1,var2,var1,var2,var1*var2);
    //Division with remainder
    printf("Dividing %d by %d:\n%d/%d = %d with Remainder= %d",var2,var1,var2,var1,var2/var1,var2%var1);
    return 0;
}