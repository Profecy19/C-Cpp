#include <stdio.h>
int main(){
    int a;
    printf("Enter a integer: ");
    scanf("%d",&a);
    printf("A=%d.",a);
    //Null Pointer
    int *c=NULL;
    void *d=&a;
    int* b=&a;//This is declaration and storing of pointer of A
    printf("\nThis is the pointer varable: %p",b);
    printf("\nAccessing a variable by its pointer: %d",*b);
    printf("\nThis is the size of the pointer in bytes: %d",sizeof(b));
    printf("\nNull pointer: %p",c);
    printf("\nVoid Pointer: %p",d);
}