#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void reverse(Node *head)
{
    Node *temp = head;
    Node *previous = NULL;
    Node *next = NULL;

    while (temp != NULL)
    {
        next = temp->next;
        temp->next = previous;
        previous = temp;
        temp = next;
    }
    head = previous;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    Node *head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = new Node(7);
    // print(head);
    // cout << endl;
    // print(head2);

    reverse(head);
    print(head);
}