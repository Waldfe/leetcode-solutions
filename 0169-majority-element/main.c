// Leetcode Problem #169 - Majority Element
// https://leetcode.com/problems/majority-element/
// algoritmo de Boyer-Moore

#include<stdio.h>

int majorityElement( int* nums, int numsSize ) {

    int possivel = 0;
    int count = 0;

    for( int i=0; i<numsSize; i++ ){
        if( count == 0 ){
            possivel = nums[i];
        }
        if( nums[i] == possivel ){
            count++;
        }else{
            count--;
        }
    }
    return possivel;
}