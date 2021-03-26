#include<stdio.h>
void insert(int a[],int *front,int *rear)
{
 int e;
 printf("\n enter number:");
 scanf("%d",&e);
 if((*front==-1)&&(*rear==-1))
 {
   *front=*rear=0;
 }
 else
 {
   *rear+=1;
 }
 a[*rear]=e;
 printf("/n entered element %d is inserted into the QUEUE\n",e);
}
void delete(int a[],int *front,int *rear)
{
  int e;
  e=a[*front];
  printf("\n the element %d deleted form QUEUE",e);
  *front+=1;
}
void display(int a[], int *front,int *rear)
{
 int i;
 printf("/n the QUEUE elements are:");
 for(i=*front;i<=*rear;i++)
 printf("%d \n",a[i]);
}
int main()
{
  int arr[10];
  int front,rear;
  int ch,e=1;
  front=rear=-1;
  while(e)
  {
    printf("\n .........MENU........\n");
    printf("\n\t1.Insert\n\t2.Delete\n\t3.Display\n\t4.Exit\n");
    printf("\n....................\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:insert(arr,&front,&rear);
             break;
      case 2:delete(arr,&front,&rear);
             break;
      case 3:display(arr,&front,&rear);
             break;
      case 4:e=0;
	     printf("\n Exiting from the program\n");
             break;
      default:printf("\n please enter valid choice\n");
    }
  }
  return 0;
}

