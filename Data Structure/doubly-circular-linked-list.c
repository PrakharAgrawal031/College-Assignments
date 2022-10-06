#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int value;
    struct node *next;
};
typedef struct node node_type;

int main()
{
    node_type *head, *temp, *result, *p_temp, *current, *temp_search1;
    int num, position, nodevalue, searchval, choice1, choice2, quit;

    // creating initial linked list
    printf("Enter the number of nodes: ");
    scanf("%d", &num);
    printf("Enter the value of node 1:");
    scanf("%d", &nodevalue);
    result = malloc(sizeof(node_type));
    result->value = nodevalue;
    result->prev = head;
    result->next = head;
    head = result;
    for (int i = 1; i < num; i++)
    {
        printf("Enter the value of node %d:", i + 1);
        scanf("%d", &nodevalue);
        temp = malloc(sizeof(node_type));
        temp->value = nodevalue;
        temp->prev = result;
        temp->next = head;
        result->next = temp;
        result = temp;
    }
    head->prev = result;
    result->next = head;
    p_temp = head;
    do
    {
        printf("%d  ", p_temp->value);
        p_temp = p_temp->next;
    } while (p_temp != head);
    printf("\n");
repeater:
    printf("Select the operation to perform: \n");
    printf(" - To print list press 0\n");
    printf(" - To insert a new element in list press 1\n");
    printf(" - To delete an existing element in list press 2\n");
    printf(" - To search an element in list press 3\n");

    scanf("%d", &choice1);

    switch (choice1)
    {
    case 0:
        printf("\nList in forward direction : ");
        p_temp = head;
        do
        {
            printf("%d  ", p_temp->value);
            p_temp = p_temp->next;
        } while (p_temp != head);
        printf("\nList in backward direction : ");
        p_temp = temp;
        do
        {
            printf("%d  ", p_temp->value);
            p_temp = p_temp->prev;
        } while (p_temp != temp);
        printf("\n\nTo continue press 1\nTo quit press 2\n");
        scanf("%d", &quit);
        if (quit == 1)
            goto repeater;
        return 0;
    case 1:
        printf("To enter a new element at head press 1\n");
        printf("To enter a new element at end press 2\n");
        printf("To enter a new element at a specific location press 3\n");

        scanf("%d", &choice2);

        if (choice2 == 1)
        {
            printf("Enter the value of node ");
            scanf("%d", &nodevalue);
            node_type *temp_h = malloc(sizeof(node_type));
            temp_h->value = nodevalue;
            temp_h->next = head;
            temp_h->prev = temp;
            temp->next = temp_h;
            head->prev = temp_h;
            head = temp_h;
            p_temp = head;
            do
            {
                printf("%d  ", p_temp->value);
                p_temp = p_temp->next;
            } while (p_temp != head);
            printf("\n\nTo continue press 1\nTo quit press 2\n");
            scanf("%d", &quit);
            if (quit == 1)
                goto repeater;
            return 0;
        }
        else if (choice2 == 2)
        {
            printf("Enter the value of node ");
            scanf("%d", &nodevalue);
            temp = malloc(sizeof(node_type));
            temp->value = nodevalue;
            temp->prev = result;
            temp->next = head;
            result->next = temp;
            head->prev = temp;
            result = temp;
            p_temp = head;
            do
            {
                printf("%d  ", p_temp->value);
                p_temp = p_temp->next;
            } while (p_temp != head);
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
            temp_search1 = head;
            while (temp_search1 != NULL)
            {
                if (temp_search1->value == searchval)
                {
                    break;
                }

                temp_search1 = temp_search1->next;
            }
            printf("\nEnter the value of node: ");
            scanf("%d", &nodevalue);
            node_type *spec_temp = malloc(sizeof(node_type));
            spec_temp->value = nodevalue;
            temp_search1->next->prev = spec_temp;
            spec_temp->next = temp_search1->next;
            spec_temp->prev = temp_search1;
            temp_search1->next = spec_temp;
            if (head->prev == spec_temp)
            {
                temp = spec_temp;
            }

            p_temp = head;
            do
            {
                printf("%d  ", p_temp->value);
                p_temp = p_temp->next;
            } while (p_temp != head);
            printf("\n\nTo continue press 1\nTo quit press 2\n");
            scanf("%d", &quit);
            if (quit == 1)
                goto repeater;
            return 0;
        }
        else
            printf("Invalid input");
        break;

    case 2:
        printf("Enter the position of element you wish to delete:\n ");
        scanf("%d", &position);
        current = head;
        if (position == 1)
        {
            head = current->next;
            temp->next = current->next;
            head->prev = temp;
            free(current);
            current = NULL;
        }
        else
        {
            while (position != 1)
            {
                current = current->next;
                position--;
            }
            current->prev->next = current->next;
            current->next->prev = current->prev;
            temp = current->prev;
            free(current);
        }
        p_temp = head;
        do
        {
            printf("%d  ", p_temp->value);
            p_temp = p_temp->next;
        } while (p_temp != head);
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
