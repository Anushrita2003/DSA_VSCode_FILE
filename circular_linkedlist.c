#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *add;
};struct node *start=NULL,*temp,*new1,*new2,*prev,*t;

void create_circular_linked_list()
{   
    int n;
    char ch;
    printf("Enter the value to be inserted in the list\n");
    scanf("%d",&n);
    start=(struct node *)(malloc(sizeof(struct node)));
    start->data=n;
    start->add=NULL;
    temp=start;
    printf("Do you want to continue?\n");
    ch=getch();

    while(ch=='Y' || ch=='y')
    {
        printf("Enter the next element\n");
        scanf("%d",&n);
        new1=(struct node *)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->add=NULL;
        temp->add=new1;
        temp=new1;
        printf("Do you want to continue?\n");
        ch=getch();
    }
     temp->add=start;
}
void Display()
{
    if(start==NULL)
        printf("LIST IS NOT CREATED\n");
        else
        {
          temp=start;
          while(temp->add!=start)
          {
            printf("%d\n",temp->data);
            temp=temp->add;
          }
          printf("%d",temp->data);
        }
}
void insersion_at_the_beginning()
{
    {   int n1;
        if(start==NULL)
        printf("LIST IS NOT CREATED\n");
        else
        {
        printf("Enter the element to be inserted at first\n");
        scanf("%d",&n1);
        new2=(struct node *)(malloc(sizeof(struct node)));
        new2->data=n1;
        new2->add=start; 
        start=new2;
        temp->add=start;
    }
    }
}
void insersion_at_the_end()
{
    {   int n1;
        if(start==NULL)
        printf("LIST IS NOT CREATED\n");
        else
        {
            temp=start;
        printf("Enter the element to be inserted at the end\n");
        scanf("%d",&n1);
        new2=(struct node *)(malloc(sizeof(struct node)));
        new2->data=n1;
        new2->add=NULL;
        while(temp->add!=start)
        {
            temp=temp->add;
        }
        temp->add=new2;
        new2->add=start;
        }
    }
}
void insersion_at_the_middle()
{
    {   int n1,pos,i=1;
        if(start==NULL)
        printf("LIST IS NOT CREATED\n");
        else
        {
            temp=start;
        printf("Enter the element to be inserted at the middle\n");
        scanf("%d",&n1);
         printf("Enter the position where the element has to be inserted\n");
        scanf("%d",&pos);

        new2=(struct node *)(malloc(sizeof(struct node)));
        new2->data=n1;
        new2->add=NULL;
        while(i<pos)
        {   prev=temp;
            temp=temp->add;
            i++;
        }
        prev->add=new2;
        new2->add=temp;
        }
    }
}
void Delete_From_Beg()
{
    {   int n1;
        if(start==NULL)
        printf("LIST IS NOT CREATED\n");
        else
        {
        temp=start;
        t=start;
        while(temp->add!=start)
        {
            temp=temp->add;
        }
        start=start->add;
         temp->add=start;
         
         free(t);
    }
    }
}
void Delete_From_End()
{
    {   int n1;
        if(start==NULL)
        printf("LIST IS NOT CREATED\n");
        else
        {
        temp=start;
        while(temp->add!=start)
        {
            prev=temp;
            temp=temp->add;
        }
         prev->add=start;
         free(temp);
    }
    }
}
void Delete_From_Middle()
{
int pos,i=1;
if(start==NULL)
printf("List not found");
else
{
printf("Enter the position");
scanf("%d",&pos);
temp=start;
while(i<pos)
{
    prev=temp;
    temp=temp->add;
    i++;
}
t=temp->add;
prev->add=t;
free(temp);
}
}
void main()
{   int choice;
    while(1)
    {
    printf("________Menu_______\n");
    printf("1 to Create\n");
    printf("2 to Display\n");
    printf("3 to insert_at_the_beginning\n");
    printf("4 to insert_at_the_end\n");
    printf("5 to insert_at_the_Middle\n");
    printf("6 to Delete_From_Beg\n");
    printf("7 to Delete_From_End\n");
    printf("8 to Delete_From_Middle\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    create_circular_linked_list();
    break;
    case 2:
    Display();
    break;
    case 3:
    insersion_at_the_beginning();
    break;
    case 4:
    insersion_at_the_end();
    break;
    case 5:
    insersion_at_the_middle();
    break;
    case 6:
    Delete_From_Beg();
    break;
    case 7:
    Delete_From_End();
    break;
    case 8:
    Delete_From_Middle();
    break;
    default:
    break;
    }
    }
}
