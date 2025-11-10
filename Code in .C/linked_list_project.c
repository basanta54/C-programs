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
    int i, no_of_nodes, choice;
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

    printf("Which node you like to point to?\nEnter '1'for first node '2'for middle node '3'for last node: ");
    scanf("%d", &choice);

    temp = start;
    switch (choice)
    {
    case 1:
        printf("You are pointing to the first node\n");
        printf("Value= %d", temp->no);
        break;
    case 2:
        for (i = 1; i <= no_of_nodes / 2; i++)
            temp = temp->next;
        printf("You are pointing to the middle node\n");
        printf("Value= %d", temp->no);
        break;
    case 3:
        while (temp->next != NULL)
            temp = temp->next;
        printf("You are pointing to the last node\n");
        printf("Value= %d", temp->no);
        break;
    default:
        printf("You entered wrong input!");
        break;
    }
    printf("\nPress 'C' to change the value or 'D' to delete it!\n");
    scanf(" %c", &option);
    if (option == 'C' || option == 'c')
    {
        printf("Enter the new value: ");
        scanf("%d", &temp->no);
        printf("the new linked list values are-\n");
        temp = start;
        while (temp != NULL)
        {
            printf("%4d", temp->no);
            temp = temp->next;
        }
    }
    else if (option == 'D' || option == 'd')
    {
        // not written yet
    }

    else
    {
        printf("You entered invalid input!");
    }
}
