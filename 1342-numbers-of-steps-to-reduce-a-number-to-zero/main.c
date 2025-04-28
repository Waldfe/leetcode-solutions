// Leetcode Problem #1342 Number of Steps to Reduce a Number to Zero
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int numberOfSteps(int num) {
    int valor = num;
    int cont = 0;
    while( valor != 0 ){
        if( valor%2 == 0 ){
            valor = valor/2;
            cont++;
        } else{
            valor--;
            cont++;
        }
    }
    return cont;
}