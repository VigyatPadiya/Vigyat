#include<stdio.h>

void main(){
    int arr_1[3][3];
    int arr_2[3][3];
    int arr_3[3][3];

    printf("\t\tFIRST ARRAY \t\t\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("ENTER ELEMENT %d OF %d MATRIX  [%d][%d]:",j,i,i,j);
            scanf("%d",&arr_1[i][j]);
            printf("\n");
        }
        printf("\n");
    }


    printf("\t\tSECOND ARRAY \t\t\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("ENTER ELEMENT %d OF %d MATRIX  [%d][%d]:",j,i,i,j);
            scanf("%d",&arr_2[i][j]);
            printf("\n");
        }
         printf("\n");
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr_3[i][j]=arr_1[i][j]-arr_2[i][j];
            printf(" [%d] ",arr_3[i][j]);

        }
        printf("\n");
    }

}
