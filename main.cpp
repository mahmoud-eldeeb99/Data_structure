#include <iostream>
#include "queue.h"
#include "stack.h"
#include "linked list.h"
using namespace std;

int main()
{
head1=NULL;
cout<<"enter your list numbers"<<endl;
int n,i,x;
cin >>n;
for (i=0;i<n;i++){
    cout <<"enter num"<<" ";
    cin >>x;
    insert1 (x);
    print1();
}
    return 0;
}
