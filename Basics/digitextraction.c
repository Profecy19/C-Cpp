#include <stdio.h>
int main(){
    int innum,i=0,n=0,diginum,u=0,v=1;
    printf("Enter the number: ");
    scanf("%d",&innum);
    int num=innum;
    int digits[100];
    while(1){
        innum/=10;
        n++;
        if (innum==0){
            break;
        }
    }
    printf("There are %d digits",n);
    int arr[n];
    for(int m=0;m<=n;m++){
        diginum=num%10;
        arr[m]=diginum;
        num/=10;
    }
    
    while(u<n){
        if(v==1){
            printf("\nThe number on %dst place: %d",v,arr[u]);
        }
        else{
            printf("\nThen number on %dth place: %d",v,arr[u]);
        }
        v*=10;
        u++;
    }
    return 0;
}