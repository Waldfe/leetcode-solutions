// Leetcode Problem #1 - Two Sum
// https://leetcode.com/problems/two-sum

#include<stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int soma = 0;
    int* result;
    for( int i=0; i<numsSize; i++ ){
        for( int j=i; j<numsSize; j++ ){
            soma = nums[i] + nums[j];
            if( i != j && soma == target ){
                result = (int *)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        } 
    }
    *returnSize = 0;
    return NULL; 
}