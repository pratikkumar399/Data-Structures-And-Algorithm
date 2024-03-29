#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
    node()
    {
        data = 0, next = nullptr, prev = nullptr;
    }
    node(int _data)
    {

        data = _data, next = nullptr, prev = nullptr;
    }
};

node *AddNodeEnd(node *head, int data)
{
    node *temp = head;
    node *newHead = temp;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *newNode = new node(data);
    temp->next = newNode;
    newNode->prev = temp;
    head = newHead;
    return head;
}

node *AddNodeFront(node *head, int data)
{
    node *newNode = new node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}
node *DeleteNodeEnd(node *head)
{
    if (head->next == nullptr || head == nullptr)

        return nullptr;
    node *temp = head;
    node *newHead = temp;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    node *last = temp->next;
    temp->next = nullptr;
    delete last;
    head = newHead;
    return head;
}

node *DeleteNodeFront(node *head)
{
    if (head->next == nullptr || head == nullptr)
        return nullptr;
    node *first = head;
    head->next->prev = nullptr;
    head = head->next;
    delete first;
    return head;
}
void PrintList(node *head)
{
    node *temp = head;
    cout << "List : ";

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = new node(9);
    head = AddNodeEnd(head, 8);
    head = AddNodeEnd(head, 1);
    PrintList(head);
    head = AddNodeFront(head, 65);
    head = AddNodeFront(head, 23);
    PrintList(head);
    head = DeleteNodeEnd(head);
    head = DeleteNodeEnd(head);
    PrintList(head);
    head = DeleteNodeFront(head);
    head = DeleteNodeFront(head);
    PrintList(head);
    return 0;
}
