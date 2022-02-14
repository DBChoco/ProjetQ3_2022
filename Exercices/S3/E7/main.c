#include <stdio.h>
#include <stdlib.h>

/**
* Structure node
*
* @next: pointer to the next node in the list, NULL if last node_t
* @value: value stored in the node
*/
typedef struct node {
  struct node *next;
  int value;
} node_t;

/**
* Structure list
*
* @first: first node of the list, NULL if list is empty
* @size: number of nodes in the list
*/
typedef struct list {
  struct node *first;
  int size;
} list_t;

/*
* Create a new node containing the value @value.
*
* @value: value stored in the node
* @next : pointer to next node, initialised to NULL.
* @return: returns the pointer to the newly created node, or NULL if an error occured.
*/
node_t *init_node(int value) {
    node_t node;
    node.value = value;
    node.next = NULL;
    return &node;
}

/*
* Add a node at the head of the list @list and increment the number of nodes in the list (member `size`)
*
* @l: linked list
* @value: value to add to the list
*
* @return: 0 if success, 1 otherwise
*/
int add_node(list_t *list, int value) {
    node_t *node = init_node(value);
    list->size ++;
    node_t *ola;
    if (list->first != NULL){
        ola = list->first;
        while (ola->next != NULL){
            ola = ola->next;
        }
        ola->next = node;
        return 0;
    }
    else {
        return 1;
    }
}


int main(int argc, char *argv[]) {  
    printf("ola");
}