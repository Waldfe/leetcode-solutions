// Leetcode Problem #118 Pascal's Triangle
// https://leetcode.com/problems/pascals-triangle/

#include<stdio.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** vetor = (int**)malloc(sizeof(int*)*numRows);
    *returnSize = numRows;
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);
    for( int i=0; i<numRows; i++ ){
        vetor[i] = malloc(sizeof(int)*(i+1));
        (*returnColumnSizes)[i] = 1+i;
    }
    vetor[0][0] = 1;
    for( int i=1; i<numRows; i++ ){
        for( int j=0; j<=i; j++ ){
            if( j == 0 || i==j ){
                vetor[i][j] = 1;
            } else{
                vetor[i][j] = vetor[i-1][j-1] + vetor[i-1][j];
            }
        }
    }
    return vetor;
}