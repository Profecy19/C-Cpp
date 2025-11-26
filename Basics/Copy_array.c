#include <stdio.h>
int main(){
    int array1[6]={1,2,3,4,5,6};
    int sizeofarray=sizeof(array1)/sizeof(array1[0]);
    int array2[sizeofarray];
    for (int i=0;i<sizeofarray;i++){
        array2[i]=array1[i];
        printf("\n %d \n", array2[i]);
    }
    return 0;
}