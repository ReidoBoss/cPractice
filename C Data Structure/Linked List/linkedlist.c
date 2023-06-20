#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{

    int x;
    struct Node* next;

}Node;

void insertEnd(Node** root, int value){
    Node* new_node = malloc(sizeof(Node));
    new_node ->x = value;
    new_node -> next = NULL;
    
    /*
    if a node kay empty, mahimo siya ug silbeng new node nga similar ra sa pag add ug 
    kinaunhan nga node. kay empty man siya so maong kinaunhan ra siya kutob. 
    */
    if(*root == NULL){
        *root = new_node;
        return;
    }  
    /*
    if ang node kay dili empty, mobutang siyag bag-o nga node nga pwede i insert as a new node.
    para ma linked sila.    
    */       
    Node* curr = *root;
    while(curr->next != NULL){

        curr = curr->next;    
    }
    curr->next = new_node;

}
void display(Node* root){
    while(root!=NULL){
        printf("%d -> ",root->x);
        root = root->next;
        if(root==NULL){
            printf("null\n");
        }
    }
}

int main(){
    Node*root = NULL;
    Node* curr = root;

    insertEnd(&root,12);
    insertEnd(&root,13);
    insertEnd(&root,24);
    insertEnd(&root,33);
    insertEnd(&root,64);    






    return 0;

}