#include<stdio.h>
#include<stdlib.h>
int a[10],peek, i = 0,size = 5;

//push
void push(int data){
    if(i == size){
        printf("Stack is full..!");
        return;
    }
    else{
        a[i] =  data;
        peek = i;
        i++;
        printf("Insertion Success..!");
    }
}

//pop
void pop(){
     if(peek == 0){
        printf("Stack empty..!\n");
        return;
     }
     else{
       peek--;
       i--;
       printf("pop operation success...!\n");
     }
}

//peek
void getPeek(){
      if(i == 0){
        printf("Stack Empty...!\n");
        return;
     }
     else{
        printf("%d is at top most...\n",a[peek]);
     }
 }


 //main function
 void main()
{
    int data,choice;
    while(1){
    printf("\n 1.push\n2.pop\n3.peek\n4.exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:printf("Enter data to push:");
           scanf("%d",&data);
           push(data);
           break;
    case 2:pop();
           break;
    case 3:getPeek();
           break;
     default: exit(0);
    }
    }
}
