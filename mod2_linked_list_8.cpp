#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x){              // constructor 
        data = x;
        next = NULL;
    }
};
node *insertbegin(node *head ,int x){
    node *temp = new node(x);
    temp->next = head;
    return temp;
}
int main(){
    node *head = NULL;
    head = insertbegin(head,30);
    head = insertbegin(head,20);
    head = insertbegin(head,10);
    return 0;
}

