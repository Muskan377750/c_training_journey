#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int num;
    struct Node *next;
    struct Node*prev;
};

struct Node *start;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void atbeg();
void atend();
void before();
void after();
void atpos();
void delbeg();
void delend();
void delbefore();
void delafter();
void delatpos();

int main()
{
    int ch1;
    char choice1 = 'y';
    start = NULL;
    system("cls");

    do
    {
        printf("\n Double LINKED LIST PROJECT \n");
        printf("\n 1. INSERT     ");
        printf("\n 2. DISPLAY     ");
        printf("\n 3. DELETE      ");
        printf("\n 4. EDIT        ");
        printf("\n 5. COUNT NODES ");
        printf("\n 6. SORTING      ");
        printf("\n 7. REVERSE     ");
        printf("\n 8. EXIT        ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch1);

        switch (ch1)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            del();
            break;
        case 4:
            edit();
            break;
        case 5:
            count();
            break;
        case 6:
            sort();
            break;
        case 7:
            reverse();
            break;
        case 8:
            choice1 = 'n';
            break;
        default:
            printf("invalid choice");
        }
    } while (choice1 == 'y');

    return 0;
}

void insert()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. ATBEG ");
        printf("\n 2. ATEND");
        printf("\n 3. BEFORE");
        printf("\n 4. AFTER ");
        printf("\n 5. ATPOSI");
        printf("\n 6. EXIT      ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch2);
        
        switch (ch2)
        {
        case 1:
            atbeg();
            break;
        case 2:
            atend();
            break;
        case 3:
            before();
            break;
        case 4:
            after();
            break;
        case 5:
            atpos();
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("INVALID CHOICE");
        }
    } while (choice2 == 'y');
}


void del()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. DELETE ATBEG ");
        printf("\n 2. DELETE ATEND");
        printf("\n 3. DELETE BEFORE");
        printf("\n 4. DELETE AFTER ");
        printf("\n 5. DELETE ATPOSI");
        printf("\n 6. EXIT      ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            delbeg();
            break;
        case 2:
            delend();
            break;
        case 3:
            delbefore();
            break;
        case 4:
            delafter();
            break;
        case 5:
            delatpos();
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("INVALID CHOICE");
        }
    } while (choice2 == 'y');
}

void atbeg()
{
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

if (ptr == NULL)
{
    printf("Memory Allocation Failed.");
    return;
}

    printf("Enter data of node: ");
    scanf("%d", &ptr->num);

    ptr->prev = NULL;
    ptr->next = start;

    if (start != NULL)
    {
        start->prev = ptr;
    }

    start = ptr;
}

void sort()
{
    if (start == NULL || start->next == NULL)
    {
        printf("Nothing to Sort.");
        return;
    }

    struct Node *i, *j;

    for (i = start; i->next != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->num > j->num)
            {
                int temp = i->num;
                i->num = j->num;
                j->num = temp;
            }
        }
    }

    printf("Linked List Sorted Successfully.");
}

void reverse()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    struct Node *current = start;
    struct Node *temp = NULL;

    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        current = current->prev;
    }

    if (temp != NULL)
        start = temp->prev;

    printf("Linked List Reversed Successfully.");
}

void display()
{
    struct Node *temp = start;
    struct Node *last = NULL;

    if (start == NULL)
    {
        printf("List is Empty.");
        return;
    }

    printf("Forward:\n");

    while (temp != NULL)
    {
        printf("%d <-> ", temp->num);
        last = temp;
        temp = temp->next;
    }

    printf("NULL");

    printf("\nBackward:\n");

    while (last != NULL)
    {
        printf("%d <-> ", last->num);
        last = last->prev;
    }

    printf("NULL");
}

void atend()
{
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

if (ptr == NULL)
{
    printf("Memory Allocation Failed.");
    return;
}

    printf("Enter data of node: ");
    scanf("%d", &ptr->num);

    ptr->next = NULL;

    if (start == NULL)
    {
        ptr->prev = NULL;
        start = ptr;
        return;
    }

    struct Node *temp = start;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->prev = temp;
}

void count()
{
    int count = 0;
    struct Node *temp = start;

    if (start == NULL)
    {
        printf("Empty Linked List.");
        return;
    }

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Count: %d", count);
}

void edit()
{
    int current_value, new_value;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter the value to edit: ");
    scanf("%d", &current_value);

    printf("Enter the new value: ");
    scanf("%d", &new_value);

    struct Node *temp = start;

    while (temp != NULL)
    {
        if (temp->num == current_value)
        {
            temp->num = new_value;
            printf("Node updated successfully.");
            return;
        }

        temp = temp->next;
    }

    printf("Value not found in the linked list.");
}

void before()
{
    int val, key;

    if (start == NULL)
    {
        printf("List is Empty.");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &val);

    printf("Insert before: ");
    scanf("%d", &key);

    struct Node *curr = start;

    while (curr != NULL && curr->num != key)
    {
        curr = curr->next;
    }

    if (curr == NULL)
    {
        printf("Value not found.");
        return;
    }

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

if (ptr == NULL)
{
    printf("Memory Allocation Failed.");
    return;
}
    ptr->num = val;

    ptr->next = curr;
    ptr->prev = curr->prev;

    if (curr->prev != NULL)
        curr->prev->next = ptr;
    else
        start = ptr;

    curr->prev = ptr;
}

void after()
{
    int val, key;

    if (start == NULL)
    {
        printf("List is Empty.");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &val);

    printf("Insert after: ");
    scanf("%d", &key);

    struct Node *curr = start;

    while (curr != NULL && curr->num != key)
    {
        curr = curr->next;
    }

    if (curr == NULL)
    {
        printf("Value not found.");
        return;
    }

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

if (ptr == NULL)
{
    printf("Memory Allocation Failed.");
    return;
}
    ptr->num = val;

    ptr->next = curr->next;
    ptr->prev = curr;

    if (curr->next != NULL)
        curr->next->prev = ptr;

    curr->next = ptr;
}

void atpos()
{
    int val, pos;

    printf("Enter value: ");
    scanf("%d", &val);

    printf("Enter position: ");
    scanf("%d", &pos);

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

if (ptr == NULL)
{
    printf("Memory Allocation Failed.");
    return;
}
    ptr->num = val;

    if (pos == 1)
    {
        ptr->prev = NULL;
        ptr->next = start;

        if (start != NULL)
            start->prev = ptr;

        start = ptr;
        return;
    }

    struct Node *temp = start;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Invalid Position.");
        free(ptr);
        return;
    }

    ptr->next = temp->next;
    ptr->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = ptr;

    temp->next = ptr;
}

void delbeg()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    struct Node *temp = start;

    start = start->next;

    if (start != NULL)
        start->prev = NULL;

    free(temp);

    printf("Node deleted from beginning.");
}

void delend()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (start->next == NULL)
    {
        free(start);
        start = NULL;
        printf("Node deleted from end.");
        return;
    }

    struct Node *temp = start;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    free(temp);

    printf("Node deleted from end.");
}

void delbefore()
{
    int key;

    if (start == NULL || start->next == NULL)
    {
        printf("Not enough nodes.");
        return;
    }

    printf("Delete before: ");
    scanf("%d", &key);

    struct Node *curr = start;

    while (curr != NULL && curr->num != key)
    {
        curr = curr->next;
    }

    if (curr == NULL)
    {
        printf("Value not found.");
        return;
    }

    if (curr->prev == NULL)
    {
        printf("No node exists before this value.");
        return;
    }

    struct Node *del = curr->prev;

    if (del->prev == NULL)
    {
        start = curr;
        curr->prev = NULL;
    }
    else
    {
        del->prev->next = curr;
        curr->prev = del->prev;
    }

    free(del);

    printf("Node deleted before the given value.");
}

void delafter()
{
    int key;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Delete after: ");
    scanf("%d", &key);

    struct Node *curr = start;

    while (curr != NULL && curr->num != key)
    {
        curr = curr->next;
    }

    if (curr == NULL)
    {
        printf("Value not found.");
        return;
    }

    if (curr->next == NULL)
    {
        printf("No node exists after this value.");
        return;
    }

    struct Node *del = curr->next;

    curr->next = del->next;

    if (del->next != NULL)
        del->next->prev = curr;

    free(del);

    printf("Node deleted after the given value.");
}

void delatpos()
{
    int pos;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1)
    {
        printf("Invalid Position.");
        return;
    }

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (pos == 1)
    {
        delbeg();
        return;
    }

    struct Node *temp = start;

    for (int i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position.");
        return;
    }

    temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);

    printf("Node deleted from the specified position.");
}