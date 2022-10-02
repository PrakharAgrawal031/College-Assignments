#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node node_type;

int main()
{
    node_type *head, *temp, *result, *p_temp, *current, *previous;
    int num, position, nodevalue, searchval, choice1, choice2;

    // creating initial linked list
    printf("Enter the number of nodes: ");
    scanf("%d", &num);
    printf("Enter the value of node 1:");
    scanf("%d", &nodevalue);
    result = malloc(sizeof(node_type));
    result->value = nodevalue;
    result->next = head;
    head = result;
    for (int i = 1; i < num; i++)
    {
        printf("Enter the value of node %d:", i + 1);
        scanf("%d", &nodevalue);
        result = malloc(sizeof(node_type));
        result->value = nodevalue;
        result->next = NULL;
        temp = head;
        for (int j = 0; j < i; j++)
        {
            if (j == i - 1)
                break;
            temp = temp->next;
        }

        temp->next = result;
    }

    p_temp = head;
    while (p_temp != NULL)
    {
        printf("%d  ", p_temp->value);
        p_temp = p_temp->next;
    }
    printf("\n");
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
            result = malloc(sizeof(node_type));
            result->value = nodevalue;
            result->next = head;
            head = result;
            p_temp = head;
            while (p_temp != NULL)
            {
                printf("%d  ", p_temp->value);
                p_temp = p_temp->next;
            }
            printf("\n");
            return 0;
        }
        else if (choice2 == 2)
        {
            printf("\nEnter the value of node: ");
            scanf("%d", &nodevalue);
            temp = head;
            for (int j = 0; j < num; j++)
            {
                if (j == num - 1)
                    break;
                temp = temp->next;
            }
            result = malloc(sizeof(node_type));
            result->value = nodevalue;
            result->next = NULL;
            temp->next = result;
            p_temp = head;
            while (p_temp != NULL)
            {
                printf("%d  ", p_temp->value);
                p_temp = p_temp->next;
            }
            printf("\n");
            return 0;
        }
        else if (choice2 == 3)
        {
            printf("Enter the value of element after which you want to insert a new element: ");
            scanf("%d", &searchval);
            temp = head;
            while (temp != NULL)
            {
                if (temp->value == searchval)
                    break;
                temp = temp->next;
            }

            printf("\nEnter the value of node: ");
            scanf("%d", &nodevalue);
            result = malloc(sizeof(node_type));
            result->value = nodevalue;
            result->next = temp->next;
            temp->next = result;
            p_temp = head;
            while (p_temp != NULL)
            {
                printf("%d  ", p_temp->value);
                p_temp = p_temp->next;
            }
            printf("\n");
            return 0;
        }
        else
            printf("Invalid input");
        break;

    case 2:
        printf("Enter the position of element you wish to delete:\n ");
        scanf("%d", &position);
        // delete_val(&head, position);
        current = head;
        previous = head;
        if (position == 1)
        {
            head = current->next;
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
        p_temp = head;
        while (p_temp != NULL)
        {
            printf("%d  ", p_temp->value);
            p_temp = p_temp->next;
        }
        printf("\n");
        break;

    case 3:
        printf("Enter the value to search: ");
        scanf("%d", &searchval);
        temp = head;
        while (temp != NULL)
        {
            if (temp->value == searchval)
                break;
            temp = temp->next;
        }

        if (temp != NULL)
            printf("\nFound %d at %p\n", temp->value, temp);
        else
            printf("Value not found\n");
        break;
    default:
        printf("Invalid Input");
        break;
    }
}
