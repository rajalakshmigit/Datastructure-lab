#include<stdio.h>
void push(int a[],int *top)
{
  int e;
  printf("\n Enter number:");
  scanf("%d",&e);
  *top=*top+1;
  a[*top]=e;
  printf("\n the entered element %d pushed into the stack\n ",e);
}
void pop(int a[],int *top)
{
  int e;
  e=a[*top];
  printf("\n the element %d poped from STACK",e);
  *top=*top-1;
}
void display (int a[],int *top)
{
  int i;
  printf("\n the stack elements are:");
  for(i=*top;i>=0;i--)
    printf("%d",a[i]);
}
int main()
{
  int arr[3],top=-1;
  int ch,e=0;
  while(e)
  {
    printf("\n.........MENU........\n");
    printf("\n\t1.push\n\t2.pop\n\t3.Display\n\t4.Exit\n");
    printf("\n.................\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
	case 1:push(arr,&top);
	       break;
	case 2:pop(arr,&top);
               break;
	case 3:display(arr,&top);
	       break;
	case 4:e=0;
               printf("\n exiting from the program\n");
	       break;
        default:printf("\n please enter the valid choice\n");
     }
   }
   return 0;
}       	



