#include<stdio.h>
    void bubbleSort(int arr[], int len){
        
        for(int i=0;i< len -1; i++){

            for(int j=0; j< len -1-i;j++){
                if(arr[j] > arr[j+1] ){
                    int swp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = swp;
                }
            }
        }
    }

    void selectionSort( int tab[], int size){

        for(int i =0;i<size-1;i++){
            int min =i;
            for (int j =i+1;j <size;j++){
                if(tab[j]< tab[min])
                    min = j;
                
            }
            int temp = tab[i];
            tab[i] = tab[min];
            tab[min] = temp;

        }
    }

int main(){

    int tab[6] = {3, 8, 0, 12, 4, 6};
    int len = sizeof(tab) /sizeof(tab[0]);
    // bubbleSort(tab, len);
    selectionSort(tab, len);
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",tab[i]);
    }
    
    return 0;
}