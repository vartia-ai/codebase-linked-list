// main.c

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    int value;
    struct node *next;
};
typedef struct node node_t;

void print_list(node_t *head) {
    node_t *current = head;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
}

int main(int argc, char *argv[]) {

    node_t *head = malloc(sizeof(node_t));
    node_t *node = head;
    for (int i = 0; i < 10; i++) {
        node->value = i;
        node->next = malloc(sizeof(node_t));
        node = node->next;
    }
    node->next = NULL;
    node->value = -1;

    print_list(head);
}

