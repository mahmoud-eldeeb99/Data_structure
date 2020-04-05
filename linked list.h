#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED
using namespace std;
//#######single linked list
struct node1{
int data;
node1*next;
};
node1* head1;//head pointer
void insert1 (int x){
node1*temp1=new node1();//create node in heap
temp1->data=x;
temp1->next=head1;
head1=temp1;

}
void print1(){
node1*temp=head1;
cout <<"list is ";
while (temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout <<endl;
}


#endif // LINKED_LIST_H_INCLUDED
