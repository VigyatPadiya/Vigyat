#include<stdio.h>

void main(){
    int arr_1[3][3];


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("ENTER ELEMENT %d OF %d MATRIX  [%d][%d]:",j,i,i,j);
            scanf("%d",&arr_1[i][j]);
            printf("\n");
        }
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" [%d] ",arr_1[i][j]);

        }
        printf("\n");
    }

}
