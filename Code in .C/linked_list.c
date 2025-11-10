#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int no;
        struct node *next;
    } *start = NULL;

    typedef struct node sn;

    sn *p, *temp, *prev = NULL;
    int i, no_of_nodes, element, found = 0;
    char option;

    printf("Enter how many nodes you want: ");
    scanf("%d", &no_of_nodes);

    for (i = 1; i <= no_of_nodes; i++)
    {
        p = (sn *)malloc(sizeof(sn));
        printf("Enter a value for node %d: ", i);
        scanf("%d", &p->no);
        p->next = NULL;

        if (start == NULL)
            start = p;
        else
        {
            temp = start;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = p;
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    temp = start;
    prev = NULL;

    while (temp != NULL)
    {
        if (temp->no == element)
        {
            printf("\nElement found: %d\n", temp->no);
            found = 1;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    if (found == 0)
    {
        printf("\nElement not found in the list.\n");
        return 0;
    }

    printf("\nPress 'C' to change the value or 'D' to delete it: ");
    scanf(" %c", &option);

    if (option == 'C' || option == 'c')
    {
        printf("Enter the new value: ");
        scanf("%d", &temp->no);
    }
    else if (option == 'D' || option == 'd')
    {
        if (temp == start)
        {
            start = temp->next;
        }
        else
        {
            prev->next = temp->next;
        }
        free(temp);
        printf("Element deleted.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }

    printf("\nUpdated linked list:\n");
    temp = start;
    while (temp != NULL)
    {
        printf("%4d", temp->no);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
