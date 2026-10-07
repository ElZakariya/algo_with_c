#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    
    for( int i = 0;i<numsSize ; i++){
        for (int j =i+1; j<=numsSize; j++){
            if(nums[i] + nums[j] == target){
                returnSize[0] = i;
                returnSize[1] = j;
                return returnSize;
            }
        }
    }
    return returnSize;
}

int main(){
    int nums[] = {0,7,8,15,1};
    int target = 9;
    int len = sizeof(nums)/ sizeof(nums[0]);
    int returnSize[2];
    int *result = twoSum(nums,len, target, returnSize);
    
    
    for (int i = 0; i < 2; i++) {
        printf("\t %d ", result[i]);
    }
    return 0;

}