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
node *delHead(node *head ){
    if(head == NULL){
        return NULL;
    }
    node *temp = head->next;
    delete head;
    return temp;
}
int main(){
    node *head = new node(10);
    delHead(head);
    return 0;
}