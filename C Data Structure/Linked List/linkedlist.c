#include <stdio.h>
#include <string.h>

typedef struct Node {
    
    int x;
    struct Node* next;

}Node;

int main(){

    Node root,elem2;
    root.x = 15;
    root.next = &elem2;
    elem2.x=2;
    elem2.next = NULL;

    printf("%d\n",root.x);
    printf("%d\n",root.next->x);

    return 0;

}