#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *add;
};struct node *start=NULL,*temp,*new1,*new2,*new3,*new4,*next,*prev;

void create()
{   int n,val;
char ch;
printf("Enter the Enter the number to be inserted");
scanf("%d",&n);
    start=(struct  node*)(malloc(sizeof(struct node)));
 start->data=n;
 start->add=NULL; 
 temp=start;
 printf("Want to continue ?");
 ch=getch();
 while(ch=='y' || ch=='Y')
 {
    printf("Enter the next element");
    scanf("%d",&n);
    new1=(struct  node*)(malloc(sizeof(struct node)));
 new1->data=n;
 new1->add=NULL;
 temp->add=new1;
  temp=temp->add;
  printf("Want to continue?");
  ch=getch();
 }
 return;
}
 

void Insert()
{ 
    int val1;
if(start==NULL)
printf("List is not found");
else
{
printf("Enter the number to be inserted");
scanf("%d",&val1);
new2=(struct  node *)(malloc(sizeof(struct node)));
new2->data=val1;
new2->add=start;
start=new2;
}
return;
}


void Display()
{ if(start==NULL)
printf("List is not found");
else{
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->add;
    }
}
return;
}

void Delete()
{  if(start==NULL)
printf("List is not found");
    temp=start;
    start=temp->add;
    free(temp);
}


void Exit()
{

}

void main()
{
int choice;
while(1)
{
printf("_____________MENU_____________\n");
printf("1.create\n");
printf("2.Insert\n");
printf("3.Delete\n");
printf("4.Display\n");
printf("9.To Terminate\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
   create();
    break;
case 2:
Insert();
break;
case 3:
Delete();
break;
case 4:
Display();
break;
default:
    break;
}
}
}

