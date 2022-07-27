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
void printlist(node *head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    node *head = new node(10);
    // node *temp1 = new node(20);
    // node *temp2 = new node(30);
    // head->next = temp1; 
    // head->next = temp2; 

                        //    or

    head->next = new node(20);
    head->next->next = new node(30);
    printlist(head);
    return 0;
}

