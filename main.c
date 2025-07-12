#include <stdio.h>
#include <stdlib.h>

// we allocate basic memory by using: Node* new_node = malloc(sizeof(Node)); -> allocates memory at runtime; we need to free() afterwards.
// malloc(...) itself returns a pointer to the amount of memory allocated for us (pointers always point to a memory location)
// we store this pointer in a instantiated variable, new_node.

typedef struct Node{
    int data;
    struct Node* next;
} Node;

int main () {
    // allocate memory for a node
    Node* head = malloc(sizeof(Node));
    
    if(head == NULL) {
        printf("Memory allocation failed, please try again.\n");
        return 1;
    }

    head->data = 42;
    head->next = NULL;

    printf("Data in head is: %d\n", head->data);
    free(head);
    return 0;
}