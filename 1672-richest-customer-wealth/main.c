// Leetcode Problem #1672 Richest Customer Wealth
// https://leetcode.com/problems/richest-customer-wealth/


#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int vet[accountsSize];
    int maior = 0;

    for( int i=0; i<accountsSize; i++ ){
        vet[i]=0;
    }

    for( int i=0; i<accountsSize; i++ ){

        for( int j=0; j<accountsColSize[i]; j++ ){
            vet[i] = vet[i] + accounts[i][j];
        }
    }

    for( int i=0; i<accountsSize; i++ ){
        if( vet[i] > maior ){
            maior = vet[i];
        }
    }

    return maior;

}