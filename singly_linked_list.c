#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

//insert at begining. 
 void insert()
 {
    struct node *newnode;

    nownode=(struct node*)malloc(sizeof(struct node));

    printf("enter date");
    scanf("%d",&newnode->date);

    newnode->next=head;
    head=newnode;

    printf("node insertion\n");
 }

 //delete form the bigining
 void deletion()

 {
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp=head;
        printf("deleted element :%d\n",head->data);
        head=head->next;
        free(temp);
    }
 }

//display list
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp=head;
        printf("linked list");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}

int main()

{
    int ch;
    do
    {
        printf("\n1.insert");
        printf("\n2.delete");
        printf("\n3.display");
        printf("\n4.exit");
        printf("\nenter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;

            case 2:
                deletetion();
                break;

            case 3:
                display();
                break;
            
            case 4:
                printf("exit");
                break;
            default:
                printf("invalid choice");
            }
    }while (ch!=4);
    return 0;
}


