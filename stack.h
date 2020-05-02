#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
#define MAX 100
using namespace std;
int as[MAX];
int top=-1;
void push (int x){
if (top==MAX){
    cout <<"over flow";
    return;
}
as[++top]=x;
}
void pop(){
if (top==-1){
    cout <<"empty stack";
return;
}
top--;
}
int top_num(){
return as[top];
}
void print_stack  (){
    cout <<"stack:";
for (int i=0;i<=top;i++){

    cout <<aq[i]<<" " ;
}
cout <<endl;
}



#endif // STACK_H_INCLUDED
