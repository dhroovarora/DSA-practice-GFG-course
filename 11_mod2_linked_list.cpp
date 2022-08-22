#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    { // constructor
        data = x;
        next = NULL;
    }
};
node *delTail(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next = NULL)
    {
        delete head;
        return NULL;
    }
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}
int main()
{
    node *head = new node(10);
    delTail(head);
    return 0;
}