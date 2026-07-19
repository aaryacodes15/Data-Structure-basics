#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

// Insert at beginning
void insertBeginning(int value)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    printf("Node inserted at beginning.\n");
}

// Insert at end
void insertEnd(int value)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    struct node *temp;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Node inserted at end.\n");
}

// Insert after given node
void insertAfter(int value, int key)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;
    while(temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Given node not found!\n");
        return;
    }

    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;

    printf("Node inserted after %d.\n", key);
}

// Display list
void display()
{
    struct node *temp = head;
    if(head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice, value, key;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert After Given Node\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertBeginning(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertEnd(value);
                break;

            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter node value after which to insert: ");
                scanf("%d", &key);
                insertAfter(value, key);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}
