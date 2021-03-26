#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node*next;
};
struct Node*push(struct Node*top)
{
 struct Node*temp;
 int val;
 printf("\n Enter a value:");
 scanf("%d",&val);
 temp=(struct Node*)malloc(sizeof(struct Node));
 temp->data=val;
 if(top==NULL)
  temp->next=NULL;
 else
  temp->next=top;
  top=temp;
  printf("\nOne value inserted into the stack");
return top;
}
struct Node*pop(struct Node* top)
{
 if(top==NULL)
   printf("\n STACK underflow \n");
 else
 {
  struct Node*temp=top;
  printf("\n deleted element:%d",temp->data);
  top=temp->next;
  free(temp);
 }
return top;
}
void display(struct Node*top)
{
 if(top==NULL)
  printf("\n stack is empty\n");
 else
 {
  struct Node*temp=top;
  while(temp->next!=NULL)
  {
   printf("%d--->",temp->data);
   temp=temp->next;
  }
  printf("%d--->NULL",temp->data);
 }
}
void main()
{
 int ch;
 int e=1;
 struct Node*top=NULL;
 printf("\n STACK using Linked List\n");
 while(e)
 {
   printf("\n.........MENU.......\n");
   printf("\n\t1.push\n\t2.pop\n\t3.Display\n\t4.Exit\n");
   printf("\n.....................\n");
   printf("enter your choice:");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1:top=push(top);
            break;
     case 2:top=pop(top);
            break;
     case 3:display(top);
            break;
     case 4:e=0;
            printf("\n exiting from the program/n");
            break;
     default:printf("\n please enter valid choice\n");
   }
 }
}


