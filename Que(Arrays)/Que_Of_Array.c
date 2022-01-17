#include <stdio.h>
#include <stdlib.h>
#define size 100
int end = -1 ,top = -1;
int arr[size];

void push()
{
    int x;
    if(end == size-1)
    {
        printf("queue is full\n");
    }
    else
    {
        if(top== - 1)
          top = 0;
        
        
        
        printf("enter the element to push\n");
        scanf("%d",&x);
        end++;
        arr[end]=x;
    }
}
void pop()
{
    if(top == -1 || top >end)
    {
        printf("queue is empty\n");
        
    }
    else
    {
        printf("element deleted from queue is :%d\n",arr[top]);
        top++;
    }
}

void peek()
{
  if(top == -1)
    {
        printf("queue is empty\n");
        
    }  
    else
    {
        printf("top element :%d\n",arr[top]);
    }
    
}


int main()
{
    
   int choice;
    while(1)
  {
    printf("1 to push\n");
    
    printf("2 to pop\n");
    
    printf("3 to peek\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();
               break;
               
        case 2:pop();
               break;
               
        case 3:peek();
               break;
        case 4: exit(0);
               break;
        default : printf("Invalid choice\n");       
    }
  }

}


