#include <stdio.h>
int main(){
    printf("Multiplication Table of 10 using While loop:\n\n");
    int i=1;
    while(i<=10){
        printf("10 X %d = %d\n",i,i*10);
        i++;
    }
    return 0;
}