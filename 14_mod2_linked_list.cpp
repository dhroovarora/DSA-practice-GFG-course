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

//  Naive Solution

// void printMiddle(node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     int m = 0;
//     node *temp = head;
//     while (temp != NULL)
//     {
//         m++;
//         temp = temp->next;
//     }
//     for (int i = 0; i < m / 2; i++)
//     {
//         head = head->next;
//     }
//     cout << head->data;
// }

void printMiddle(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    printMiddle(head);
    return 0;
}