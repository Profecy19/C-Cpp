#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter two numbers to compare: ");
    scanf("%d %d",&n1,&n2);
    printf("\nIs %d>%d?: %d\n",n1,n2,n1>n2);
    printf("\nIs %d>=%d?: %d\n",n1,n2,n1>=n2);
    printf("\nIs %d<%d?: %d\n",n1,n2,n1<n2);
    printf("\nIs %d<=%d?: %d\n",n1,n2,n1<=n2);
    printf("\nIs %d=%d?: %d\n",n1,n2,n1==n2);
    printf("\nIs %d not equal to %d?: %d\n",n1,n2,n1!=n2);
    return 0;
}