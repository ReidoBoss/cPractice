#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    
    int x;
    struct Node* next;

}Node;

void insertEnd(Node** root,int value){
    Node* new_node = malloc(sizeof(Node));
    if(new_node == NULL){
        exit(1);
    }
    new_node -> next = NULL;
    new_node -> x = value;

    Node* curr = *root;
    while(curr -> next !=NULL){
        curr = curr -> next;
    }
}

int main(){

    Node root;
    root.x = 15;
    root.next = malloc(sizeof(Node));
    root.next->x = -2;
    root.next->next = malloc(sizeof(Node));
    root.next->next->x = 25;
    root.next->next->next= NULL;

    // Node* curr = &root;
    // while(curr != NULL) {
    
    //     printf("%d\n",curr->x);
        
    // }
    // for(Node* curr = &root; curr!=NULL; curr -> next){
    //     printf("%d->",curr->x);
    //     curr = curr -> next;
    // }
    printf("null");

  
    free(root.next->next);
    free(root.next);

    return 0;

}