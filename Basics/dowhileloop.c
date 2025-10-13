#include <stdio.h>
int main(){
    int i=1;
    printf("Multiplication Table of 7 using Do-While loop:\n\n");
    do{
        printf("7 X %d = %d\n",i,i*7);
        i++;
    }
    while(i<=10);
}