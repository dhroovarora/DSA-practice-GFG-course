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
int searchLL(node *head,int x){
                                            // iterative approach
    // int i=1;
    // while(head){
    //     if(head->data == x){
    //         return i; 
    //     }
    //     else{
    //         i++;
    //         head = head->next;
    //     }
    // }
    // return -1; 
                                            // recursive approach
    if(head  == NULL){
        return -1;
    }
    else{
        if(head->data == x){
            return 1;
        }
        else{
            int s = searchLL(head->next,x);
            if(s == -1){ return -1;} 
            return s+1;
        }
    }
    
}
int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    int x;
    cin>>x;
    cout<<searchLL(head,x);
    return 0;
}

