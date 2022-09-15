//not completed yet
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};
typedef struct node node_t;

void printlist(node_t *head)
{
    node_t *temp = head;
    while (temp != NULL)
    {
        printf("%d - ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
node_t *createnode(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
}

node_t *insert_at_head( node_t **head, node_t *node_to_insert){
    node_to_insert ->next= *head;
    *head = node_to_insert;
    return node_to_insert;
}
node_t *find_node(node_t *head, int value){
    node_t *temp = head;
    while (temp != NULL)
    {
        if ( temp -> value == value) return temp;
        temp = temp->next;   
    }
    return NULL;
}
int main()
{
    node_t *head;
    node_t *temp;
    int num;
    printf("Enter the number of nodes: ");
    scanf("%d", &num);
    int nodevalue, searchval;

    for (int i = 0; i < num; i++)
    {
         printf("Enter the value of node %d:",i+1);
         scanf("%d", &nodevalue);
         temp = createnode(nodevalue);
         head = insert_at_head(&head, temp);
    }
    
    printf("Enter the value to search: ");
    scanf("%d", &searchval);
    temp  = find_node(head, searchval);
    if (temp != NULL) printf ("\nFound %d \n", temp->value);
    else printf("Value not found\n");
    printlist(head);
    return 0;
}
