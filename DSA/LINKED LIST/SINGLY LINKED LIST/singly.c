#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h> // Add this for getche

struct Node
{
    int info;
    struct Node *next;
} *start, *last, *ptr, *fresh, *temp, *head;

struct Node* create()
{
    ptr = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value:\n");
    scanf("%d", &ptr->info);

    ptr->next = NULL;
    return (ptr);
}

void add_beg()
{
    fresh = create();

    if (start == NULL)
    {
        start = fresh;
        last = fresh;
    }
    else
    {
        fresh->next = start;
        start = fresh;
    }
}

void add_last()
{
    fresh = create();

    if (start == NULL)
    {
        start = fresh;
        last = fresh;
    }
    else
    {
        last->next = fresh;
        last = fresh;
    }
}

void display()
{
    ptr = start;

    if (ptr == NULL)
    {
        printf("No Node Found");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("\t %d", ptr->info);
            ptr = ptr->next;
        }
    }
}

int count()
{
    int c = 0;
    ptr = start;
    while (ptr != NULL)
    {
        c++;
        ptr = ptr->next;
    }
    return (c);
}

void add_pos()
{
    int p, c = count(), i;
    printf("\n Enter position to insert: ");
    scanf("%d", &p);

    if (p < 1 || p > c + 1)
    {
        printf("\n Invalid Position");
    }
    else
    {
        if (p == 1)
        {
            add_beg();
        }
        else if (p == c + 1)
        {
            add_last();
        }
        else
        {
            fresh = create();
            ptr = start;
            for (i = 1; i < p - 1; i++)
            {
                ptr = ptr->next;
            }
            fresh->next = ptr->next;
            ptr->next = fresh;
        }
    }
}

void delete_node()
{
    int p, c = count(), i, del_val;
    if (start == NULL)
    {
        printf("\n No list exist: Come Again");
    }
    else
    {
        printf("\n Enter position to delete: ");
        scanf("%d", &p);
        if (p < 1 || p > c)
        {
            printf("Invalid position!");
        }
        else if (p == 1)
        {
            ptr = start;
            start = start->next;
            del_val = ptr->info;
            free(ptr);
            printf("Deleted value is %d", del_val);
        }
        else
        {
            ptr = start;
            for (i = 1; i < p - 1; i++)
            {
                ptr = ptr->next;
            }
            temp = ptr->next;
            del_val = temp->info;
            ptr->next = temp->next;
            free(temp);
            printf("Deleted value is %d", del_val);
        }
    }
}

// The user is required to change value of a given node as per users choice provided single list having number or valuable number of nodes
void modify()
{
    int p, c = count(), i, data;
    if (c == 0)
    {
        printf("\n List does not exist : No need of modification!");
    }
    else
    {
        printf("\n Enter position to modify:");
        scanf("%d", &p);
        if (p < 1 || p > c)
        {
            printf("\n Invalid Position: can't modify");
        }
        else
        {
            printf("\n Enter new value:");
            scanf("%d", &data);
            if (p == 1)
            {
                start->info = data;
            }
            else if (p == c)
            {
                last->info = data;
            }
            else
            {
                ptr = start;
                for (i = 1; i < p; i++)
                {
                    ptr = ptr->next;
                    ptr->info = data;
                }
            }
        }
    }
}

int main()
{
    int ch;
    char choice = 'Y';

    start = NULL;
    last = NULL;

    printf("1. Add Beginning\n");
    printf("2. Add at last\n");
    printf("3. Display\n");
    printf("4. Add Position\n");
    printf("5. Delete\n");
    printf("6. Modify\n");
    printf("7. Exit\n");

    while (choice == 'Y')
    {
        printf("\n Enter your choice (1, 2, 3, 4, 5, 6, 7): ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            add_beg();
            display();
            break;
        case 2:
            add_last();
            display();
            break;
        case 3:
            display();
            break;
        case 4:
            add_pos();
            display();
            break;
        case 5:
            delete_node();
            display();
            break;
        case 6:
            modify();
            display();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\n Not a Valid choice: Try Again!");
        }
        printf("\n Enter your choice to continue (Y/N): ");
        choice = toupper(getche());
    }

    return 0;
}
