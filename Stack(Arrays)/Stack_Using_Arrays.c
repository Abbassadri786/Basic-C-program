#include <iostream>

using namespace std;

#define max 500

int stack[max]={0},top;

void push(int value){
    if(top>=(max-1))
    cout<< "stack is full" <<endl;
    else
    stack[++top]=value;
}

void pop(){
    if(top < 0)
    cout << "stack is empty" <<endl;
    else
    top--;
}
void peek(){
    if(top<0)
    cout<<"stack is empty" << endl;
    else
    cout<<"Value at top of the stack is"<<stack[top]<<endl;
}

int main()
{
   top= -1;
   while(true){
       int cond;
       cout<<"enter 1 to push the value"<< endl;
       cout<<"enter 2 to pop the value"<< endl;
       cout<<"enter 3 to peek the value"<< endl;
       cin>>cond;
       
       switch(cond){
           case 1:
           int value;
           cout<<"enter value to push"<<endl;
           cin>> value;
           push(value);
           break;
           
           case 2:
           pop();
           break;
           
           case 3:
           peek();
           break;
           
           default:
           cout<<"enter number btw 1-3"<<endl;
       }
       cout<<".........................................."<<endl<<endl;
   }
   
   return 0;
}
