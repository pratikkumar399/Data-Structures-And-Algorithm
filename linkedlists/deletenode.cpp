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
        next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
            // OR
            // tail = newNode;
        }

        cin >> data;
    }
    return head;
}

void deleteNode_begin(Node **head)
{
    Node *temp;
    if (*head == NULL)
    {
        return;
    }
    temp = *head;
    *head = (*head)->next;
    delete (temp);
    return;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = takeinput();
    print(head);

    deleteNode_begin(&head);
    print(head);

    return 0;
}