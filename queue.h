#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAX_q 10
using namespace std;
 int front=-1,rear=-1;
int aq[MAX_q];
bool IsEmpty(){

return (front==-1&&rear==-1);
}
bool IsFull(){
return ((rear+1)%MAX_q==front);
}
void enqueue(int x){
if (IsEmpty()){
    cout <<"your queue is emty"<<endl;
}
else if (IsFull()) {
        cout <<"your queue is full"<<endl;

}
else {
    rear =(rear+1)%MAX_q;
}
aq[rear]=x;
}
void dequeue (){
if (IsEmpty()){
    cout <<"your queue is emty"<<endl;
}
else{
    front =(front +1)%MAX_q;

}

}
int front_num (){
return aq[front];
}
void print_queue (){
    cout <<"queue:";
for (int i=front;i<=rear;i++){

    cout <<aq[i]<<" " ;
}
cout <<endl;
}

#endif // QUEUE_H_INCLUDED
