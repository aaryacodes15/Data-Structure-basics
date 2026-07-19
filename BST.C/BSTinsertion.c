#include<stdio.h>
typedef struct node
{
    struct node* left ;
   int data ;
   struct node* right;

}node;

 node * root = NULL;
 void Insert(){
    node* ptr = (node*)malloc(sizeof(node));
    ptr->left = NULL;
    ptr->right = NULL;

    node* loc = root ;
    node* prev = loc;

    while (loc !=NULL)
    {
        prev = loc;
        if (loc -> data > data)
        {
            loc = loc->left;
        }
        else 
        {
        loc = loc->right;
        }
    }
    
    
 }

 int main (){
    int choice;
    int data;
    do
    {
        printf("1.Insert\n");
        printf("2.Inorder\n");
        printf("3.Exit\n");
        print("Enter your choice\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1 : print("Enter the data\n");
        Insert(data);
            break;
        case 2:
        Incode(data);
        default:
            break;
        }
    } while (choice != 7);
    return 0;
 }
