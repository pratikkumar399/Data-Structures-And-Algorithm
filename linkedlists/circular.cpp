#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node()
    {
        data = 0, next = nullptr;
    }
    node(int _data)
    {
        data = _data, next = nullptr;
    }
};
node *AddNodeEnd(node *head, int data)
{
    node *temp = head;
    node *newHead = temp;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *newNode = new node(data);
    temp->next = newNode;
    newNode->next = newHead;
    head = newHead;
    return head;
}

node *AddNodeFront(node *head, int data)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *newHeadNode = new node(data);
    temp->next = newHeadNode;
    newHeadNode->next = head;
    head = newHeadNode;
    return head;
}
node *DeleteNodeEnd(node *head)
{
    if (head->next == nullptr || head == nullptr)
        return nullptr;
    node *temp = head;
    node *newHead = temp;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }
    node *last = temp->next;
    temp->next = head;
    delete last;
    head = newHead;
    return head;
}

node *DeleteNodeFront(node *head)
{
    if (head->next == nullptr || head == nullptr)
        return nullptr;
    node *first = head;
    node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    head = head->next;
    temp->next = head;
    delete first;

    return head;
}

void PrintList(node *head)
{
    node *temp = head;
    cout << "List : " << temp->data << " ";
    temp = temp->next;
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = new node(7);
    head->next = head;
    head = AddNodeEnd(head, 3);
    head = AddNodeEnd(head, 2);
    PrintList(head);
    head = AddNodeFront(head, 1);
    head = AddNodeFront(head, 11);
    PrintList(head);
    head = DeleteNodeEnd(head);
    head = DeleteNodeEnd(head);
    PrintList(head);

    head = DeleteNodeFront(head);
    head = DeleteNodeFront(head);
    PrintList(head);
    return 0;
}
