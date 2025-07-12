#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main () {
    Node n;
    n.data = 10;
    n.next = NULL;
    printf("Value at node is: %d", n.data);
    return 0;
}