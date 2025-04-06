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
 

void Insert_on_First()
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

void Insert_on_Last()
{ int val3;
   if(start==NULL)
printf("List is not found");
else
{ 
printf("Enter the number to be inserted");
scanf("%d",&val3);
new3=(struct  node *)(malloc(sizeof(struct node)));
new3->data=val3;
new3->add=NULL;
temp=start;
while(temp->add!=NULL)
{
    temp=temp->add;
}
temp->add=new3;  
}
}

void Insert_on_Middle()
{   int val,pos,i=1;
    if(start==NULL)
    {
      printf("List is not found");
    }
    else
    {
     printf("Enter the number to be inserted at the middle");
     scanf("%d",&val);
     new4=(struct node *)(malloc(sizeof(struct node)));
     new4->data=val;
     new4->add=NULL;
     printf("Enter the position where the number has to be inserted");
     scanf("%d",&pos);
     next=start;
     while(i<pos)
     {
      prev=next;
      next=next->add;
      i++;
     }
      prev->add=new4;
      new4->add=next;
    }
}

void Delete_from_first()
{  if(start==NULL)
printf("List is not found");
    temp=start;
    start=temp->add;
    free(temp);
}

void Delete_from_Last()
{
     if(start==NULL)
printf("List is not found");
else
{
    temp=start;
    while(temp->add!=NULL)
{
    prev=temp;
    temp=temp->add;
}
prev->add=NULL;
free(temp);
}
}

void Delete_from_Middle()
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
next=temp->add;
prev->add=next;
free(temp);
}
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
printf("2.Insert_on_First\n");
printf("3.Insert_on_Last\n");
printf("4.Insert_on_Middle\n");
printf("5.Delete_from_first\n");
printf("6.Delete_from_Last\n");
printf("7.Delete_from_Middle\n");
printf("8.Display\n");
printf("9.To Terminate\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
   create();
    break;
case 2:
Insert_on_First();
break;
case 3:
Insert_on_Last();
break;
case 4:
Insert_on_Middle();
break;
case 5:
Delete_from_first();
break;
case 6:
Delete_from_Last();
break;
case 7:
Delete_from_Middle();
break;
case 8:
Display();
break;
default:
    break;
}
}
}

