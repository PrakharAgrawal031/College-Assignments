#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node node_type;

node_type *create_node(int value)
{
    node_type *result = malloc(sizeof(node_type));
    result->value = value;
    result->next = NULL;
}

node_type *find_node(node_type *head, int value)
{
    node_type *temp = head;
    while (temp != NULL)
    {
        if (temp->value == value)
            return temp;
        temp = temp->next;
    }
}
node_type *find_end(node_type *head, int size)
{
    node_type *temp = head;
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            return temp;
        temp = temp->next;
    }
}

node_type *insert_at_head(node_type **head, node_type *newnode)
{
    newnode->next = *head;
    *head = newnode;
    return newnode;
}
void insert_random(node_type *node_to_insert_after, node_type *newnode)
{
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode;
}
node_type *insert_at_end(node_type *temp, node_type *newnode)
{
    temp->next = newnode;
}

node_type *delete_val(node_type **head, int position)
{
    node_type *current = *head;
    node_type *previous = *head;
    if (position == 1)
    {
        *head = current->next;
        free(current);
        current = NULL;
    }
    else
        while (position != 1)
        {
            previous = current;
            current = current->next;
            position--;
        }
    previous->next = current->next;
    free(current);
    current = NULL;
} 

void printlist(node_type *head)
{
    node_type *temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    node_type *head, *temp1, *temp2, *nodefinder;
    int num, position, nodevalue, searchval, choice1 , choice2;

    // creating initial linked list
    printf("Enter the number of nodes: ");
    scanf("%d", &num);
    printf("Enter the value of node 1:");
    scanf("%d", &nodevalue);
    node_type *result = malloc(sizeof(node_type));
    result->value = nodevalue;
    result->next = NULL;
    temp1 = result;
    insert_at_head(&head, temp1);
    for (int i = 1; i < num; i++)
    {
        printf("Enter the value of node %d:", i + 1);
        scanf("%d", &nodevalue);
        node_type *result = malloc(sizeof(node_type));
        result->value = nodevalue;
        result->next = NULL;
        temp1 = result;
        temp2 = find_end(head, i); // finding the end of list
        insert_at_end(temp2, temp1);
    }

    printlist(head);
    printf("Select the operation to perform: \n");
    printf(" - To insert a new element in list press 1\n");
    printf(" - To delete an existing element in list press 2\n");
    printf(" - To search an element in list press 3\n");

    scanf("%d", &choice1);

    switch (choice1)
    {
    case 1:
        printf("To enter a new element at head press 1\n");
        printf("To enter a new element at end press 2\n");
        printf("To enter a new element at a specific location press 3\n");

        scanf("%d", &choice2);

        if (choice2 == 1)
        {
            printf("Enter the value of node ");
            scanf("%d", &nodevalue);
            node_type *result = malloc(sizeof(node_type));
            result->value = nodevalue;
            result->next = NULL;
            temp1 = result;
            insert_at_head(&head, temp1);
            printlist(head);
            return 0;
        }
        else if (choice2 == 2)
        {
            printf("\nEnter the value of node: ");
            scanf("%d", &nodevalue);
            temp2 = find_end(head,num);
            node_type *result = malloc(sizeof(node_type));
            result->value = nodevalue;
            result->next = NULL;
            temp1 = result;
            insert_at_end(temp2, temp1);
            printlist(head);
            return 0;
        }
        else if (choice2 == 3)
        {
            printf("Enter the value of element after which you want to insert a new element: ");
            scanf("%d", &searchval);
            node_type *temp = head;
            while (temp != NULL)
            {
                if (temp->value == searchval)
                    return temp;
                temp = temp->next;
            }
            temp1 = temp;
            printf("\nEnter the value of node: ");
            scanf("%d", &nodevalue);
            node_type *result = malloc(sizeof(node_type));
            result->value = nodevalue;
            result->next = NULL;
            temp1 = result;
            insert_random(nodefinder, temp1);
            printlist(head);
            return 0;
        }
        else
            printf("Invalid input");
        break;

    case 2:
        printf("Enter the position of element you wish to delete:\n ");
        scanf("%d", &position);
        delete_val(&head, position);
        printlist(head);
        break;

    case 3:
        printf("Enter the value to search: ");
        scanf("%d", &searchval);
        node_type *temp = head;
            while (temp != NULL)
            {
                if (temp->value == searchval)
                    return temp;
                temp = temp->next;
            }
            temp1 = temp;
        if (temp1 != NULL)
            printf("\nFound %d at %p\n", temp1->value, temp1);
        else
            printf("Value not found\n");
        break;
    default:
        printf("Invalid Input");
        break;
    }
}

