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
node *sortedInsert(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    if (x < head->data)
    {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    while (curr != NULL && curr->next->data < x)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main()
{
    node *head = new node(10);
    int x;
    cin >> x;
    sortedInsert(head, x);
    return 0;
}