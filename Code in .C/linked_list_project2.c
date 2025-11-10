#include <stdio.h>
#include <stdlib.h>

main()
{
    struct node
    {
        int no;
        struct node *next;
    } *start = NULL;

    typedef struct node sn;

    sn *p, *temp;
    int i, no_of_nodes, element, found = 0;
    char option;

    printf("Enter how many node you want: ");
    scanf("%d", &no_of_nodes);

    for (i = 1; i <= no_of_nodes; i++)
    {
        p = (sn *)malloc(sizeof(sn));
        printf("Enter a value for node %d: ", i);
        scanf("%d", &p->no);
        p->next = NULL;

        if (start == NULL)
        {
            start = p;
        }
        else
        {
            temp = start;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = p;
        }
    }

    printf("Enter Searching element!");
    scanf("%d", &element);
    temp = start;
    for (i = 1; i <= no_of_nodes; i++)
    {
        if (temp->no == element)
        {
            printf("element founded! at position %d",i);
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (found = 0)
    {
        printf("Element not found!");
    }

    printf("\nPress 'C' to change the value or 'D' to delete it!\n");
    scanf(" %c", &option);
    if (option == 'C' || option == 'c')
    {
        printf("Enter the new value: ");
        scanf("%d", &temp->no);
        printf("The updated linked list is-\n");
        temp = start;
        while (temp != NULL)
        {
            printf("%4d", temp->no);
            temp = temp->next;
        }
    }
    else if (option == 'D' || option == 'd')
    {
        // not Written yet
    }

    else
    {
        printf("You entered invalid input!");
    }

}