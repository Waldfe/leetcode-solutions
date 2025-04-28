// Leetcode Problem #0876 Middle of the Linked List
// https://leetcode.com/problems/middle-of-the-linked-list/


#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


 struct ListNode {
     int val;
     struct ListNode *next;
 };
 
int conta(struct ListNode* head) {
    if( head != NULL ){
        return 1 + conta( head->next );
    } else{
        return 0;
    }
}

struct ListNode* middleNode(struct ListNode* head) {
    int cont = 0;
    struct ListNode* var;

    if( head->next == NULL ){
        return head;
    }

    var = head;
    cont = conta( head );
    cont = cont/2;

    do{
        var = var->next;
        cont--;
    }while(cont!=0);

    return var;
}