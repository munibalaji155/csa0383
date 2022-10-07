#include<stdio.h>
#include<stdlib.h>
int a[10],i=0,j,size=5,front=0,rear=0;

 //enqueue
 void enqueue(int data){
     if(i==size){
        printf("queue is full..");
     }
     else if(i!=size){
        a[i]=data;
        i++;
        front=i;
    }
     }

//dequeue
void dequeue(){
  if(front<=size && front>0){
        front--;
    a[front]=a[front-1];
  }
  printf("front:%d\n",a[front]);
  if(front==rear){
    printf("queue is empty..");
  }
}

//Main function
void main()
{
   int data,choice;
   while(1){
   printf("\n 1.enqueue \n 2.dequeue\n 3.exit\n");
   printf("Enter choice:");
   scanf("%d",&choice);
   switch(choice){
     case 1:printf("enter the data:");
            scanf("%d",&data);
            enqueue(data);
            break;
     case 2:dequeue();
            break;
     case 3:exit(0);
   }
}
}
