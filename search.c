#include<stdio.h>

int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size -1;

    while( left <=right){

        int middle = left + (right - left)/2;
        if(arr[middle] == target){
            return arr[middle];
        }
        if (arr[middle] > target){
            left = middle +1;
        }else{
            right = middle -1;
        }
        return -1;
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int result = binarySearch(arr, 7, 60);

    printf("%d\n", result);
}