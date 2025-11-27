#include <stdio.h>
int main(){
    int mata[3][3]={{3,2,1},{1,2,4},{8,9,10}};
    int matb[3][3]={{1,6,5},{1,2,4},{4,2,6}};
    int ele=0,sumele=0,sum[3][3];
    for (int z=0;z<3;z++){
        ele=0;
        int ele1,ele2;
        for(int y=0;y<3;y++){
            sumele=0;
            for (int k=0;k<3;k++){
                ele1=mata[z][k];
                ele2=matb[k][y];
                sumele+=ele1*ele2;
                }
            sum[z][y]=sumele;
        }
    }
    for(int a=0;a<3;a++){
        printf("|");
        for (int b=0;b<3;b++){
            printf("\t%d\t",sum[a][b]);
        }
        printf("|\n");
    }
}