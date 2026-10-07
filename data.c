#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0,j=0,k=0;
    // int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    // int len = sizeof(tab)/ sizeof(tab[0]);
    // for (int i = 0;i < len;i++){
    //     printf("num = %d\n",tab[i]);
    // }

    int matrix[][3]= {
        {1,2, 3},
        {0,9,8},
        {5,6,7},
        {5,5,5}
    };
    
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    while( i < rows){
        j=0;
        while( j < cols){
            printf("%d \t",matrix[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    for
    
}