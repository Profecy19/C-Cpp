#include <stdio.h>
int main(){
    int indeci,a,b=0;
    printf("Enter your number: ");
    scanf("%d",&indeci);
    int q=indeci;
    while(indeci>=1){
        b++;
        //printf("\n %d",indeci%2);
        indeci/=2;
    }
    //printf("Hell: %d",q);
    int c=b,e=-1,f=b-1;
    int arr[b];
    while(c>0){
        c--;
        f--;
        arr[c]=q%2;
        q/=2;
        e++;
    }
    //arr[0]=q/2;
    printf("\n");
    for(int d=0;d<b;d++){
        printf("\t%d\t",arr[d]);
    }
    //printf("%d",b);
}