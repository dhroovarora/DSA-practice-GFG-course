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
node *insertPos(node *head, int pos, int data)
{

    node *temp = new node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    for (int i = 0; i < pos - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main()
{
    node *head = new node(10);
    int pos, data;
    cin >> pos >> data;
    insertPos(head, pos, data);
    return 0;
}