// Leetcode Problem #1480 Running Sum of 1d Array
// https://leetcode.com/problems/running-sum-of-1d-array/


#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {

    int* runningSum = malloc( sizeof( int )* numsSize );
    int a = numsSize;
    *returnSize = a;
    runningSum[0] = nums[0];
    for( int i=1; i<numsSize; i++ ){
        runningSum[i] = runningSum[i-1] + nums[i];
    }

    return runningSum;
}