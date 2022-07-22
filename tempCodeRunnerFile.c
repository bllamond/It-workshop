#include <stdio.h>
#include <stdlib.h> 
struct node{
    int data;
    struct node *next;
};
struct node *head;
void main ()
{
    push(5);
    display();
}

push(int info)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    if(!temp)
    {
        printf("Stack Overflow");
        exit(1);
    }
    temp->data=info;
    temp->next=head;
    head=temp;




}

display()
{
    node* temp;
    if(top=NULL)
    {
        printf("Stack Underflow");
        exit(1);

    }
    else
    {
        temp=head;
        while (temp != NULL)
        {
            cout << temp->data << "-> ";
            temp = temp->link;
        }
    }
}

