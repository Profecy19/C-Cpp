#include <stdio.h>
int main(){
    //Sum of Even numbers till 50
    int i=1;
    int j=0;
    while(i<=50){
        if(i%2==0){
            j+=i;
            if(i==50){
            printf("Sum of even numbers till 50 = %d\n",j);
            }
        }
        i++;
    }
    //Sum of odd number till 50
    int k=1;
    int l=0;
    while(k<=50){
        if(k%2 == 1){
            l+=k;
        }
        if(k==50){
        printf("Sum of odd numbers till 50 = %d\n",l);
        }
        k++;
    }
    //Sum of prime numbers till 50
    for(int z=2,o=0;z<=50;z++){
        for (int x=2;x<=z;x++){
            if(z%x==0 && z!=2){
                break;
            }
            if((z==2) || (z%x)!=0){
                if(x==z-1 || z==2){
                    o+=z;
                    printf("Prime number: %d\n",z);
                }
            }
        }
        
        if(z==50){
            printf("Sum of Prime numbers till 50 = %d\n",o);
            }
        
    }
        return 0;
}