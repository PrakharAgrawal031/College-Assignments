#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node node_type;

int main()
{
    node_type *head, *temp, *result, *p_temp, *current, *previous;
    int num, position, nodevalue, searchval, choice1, choice2, quit;
    printf("Enter the number of nodes: ");
    scanf("%d", &num);
    printf("Enter the value of node 1:");
    scanf("%d", &nodevalue);
    head = malloc(sizeof(node_type));
    head->value = nodevalue;
    head->next = NULL;
    temp = head;
    for (int i = 1; i < num; i++)
    {
        printf("Enter the value of node %d:", i + 1);
        scanf("%d", &nodevalue);
        result = malloc(sizeof(node_type));
        result->value = nodevalue;
        result->next = NULL;
        temp->next = result;
        temp = temp->next;
    }
    temp->next = head;

    p_temp = head;
    do
    {
        printf("%d  ", p_temp->value);
        p_temp = p_temp->next;
    } while (p_temp != head);

    printf("\n");
repeater:
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
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = result;
            head = result;
            p_temp = head;
            do
            {
                printf("%d  ", p_temp->value);
                p_temp = p_temp->next;
            } while (p_temp != head);
            printf("\n");
            printf("\n\nTo continue press 1\nTo quit press 2\n");
            scanf("%d", &quit);
            if (quit == 1)
                goto repeater;
            return 0;
        }
        else if (choice2 == 2)
        {
            printf("\nEnter the value of node: ");
            scanf("%d", &nodevalue);
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            result = malloc(sizeof(node_type));
            result->value = nodevalue;
            result->next = head;
            temp->next = result;
            p_temp = head;
            do
            {
                printf("%d  ", p_temp->value);
                p_temp = p_temp->next;
            } while (p_temp != head);
            printf("\n");
            printf("\n\nTo continue press 1\nTo quit press 2\n");
            scanf("%d", &quit);
            if (quit == 1)
                goto repeater;
            return 0;
        }
        else if (choice2 == 3)
        {
            printf("Enter the value of element after which you want to insert a new element: ");
            scanf("%d", &searchval);
            temp = head;
            do
            {
                if (temp->value == searchval)
                    break;
                temp = temp->next;
            } while (temp->next != head);

            printf("\nEnter the value of node: ");
            scanf("%d", &nodevalue);
            result = malloc(sizeof(node_type));
            if (temp->next == head)
            {
                result->value = nodevalue;
                result->next = head;
                temp->next = result;
            }

            else
            {
                result->value = nodevalue;
                result->next = temp->next;
                temp->next = result;
            }
            p_temp = head;
            do
            {
                printf("%d  ", p_temp->value);
                p_temp = p_temp->next;
            } while (p_temp != head);
            printf("\n");
            printf("\n\nTo continue press 1\nTo quit press 2\n");
            scanf("%d", &quit);
            if (quit == 1)
                goto repeater;
            return 0;
        }
        else
        {
            printf("Invalid input");
        }
        printf("\n\nTo continue press 1\nTo quit press 2\n");
        scanf("%d", &quit);
        if (quit == 1)
            goto repeater;
        break;

    case 2:
        printf("Enter the position of element you wish to delete:\n ");
        scanf("%d", &position);
        temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        current = head;
        if (position == 1)
        {
            head = current->next;
            temp->next = head;
            free(current);
            current = NULL;
        }
        else
        {
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
        p_temp = head;
        do
        {
            printf("%d  ", p_temp->value);
            p_temp = p_temp->next;
        } while (p_temp != head);
        printf("\n");
        printf("\n\nTo continue press 1\nTo quit press 2\n");
        scanf("%d", &quit);
        if (quit == 1)
            goto repeater;
        break;

    case 3:
        printf("Enter the value to search: ");
        scanf("%d", &searchval);
        temp = head;
        do
        {
            if (temp->value == searchval)
                break;
            temp = temp->next;
        } while (temp->next != head);

        if (temp->value==searchval)
            printf("\nFound %d at %p\n", temp->value, temp);
        else
        {
            printf("Value not found\n");
        }
        printf("\n\nTo continue press 1\nTo quit press 2\n");
        scanf("%d", &quit);
        if (quit == 1)
            goto repeater;
        break;
    default:
        printf("Invalid Input");
        printf("\n\nTo continue press 1\nTo quit press 2\n");
        scanf("%d", &quit);
        if (quit == 1)
            goto repeater;
        break;
    }
}
