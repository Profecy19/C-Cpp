#include <stdio.h>
int main(){
    int arr1[5]={2,43,32,44,1};
    for (int k=1;k<4;k++){
        for (int i=0;i<4;i++){
        if (arr1[i]<arr1[i+1])
        {
            int to_replace = arr1[i+1];
            arr1[i+1]=arr1[i];
            arr1[i]=to_replace;
        }
        else{
            continue;
        }
    }
    }
    for (int k=0;k<5;k++){
        printf("\n%d\n",arr1[k]);
    }
}