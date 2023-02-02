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

Node *delete_lastnode(Node **head)
{
    Node *temp = NULL;
    Node *current = *head;

    // so if the head is already null then we have to simply return null
    if (*head == NULL)
    {
        return NULL;
    }

    // otherwise move upto the secone last element and remove the last element
    while (current->next)
    {
        temp = current;
        current = current->next;
    }
    temp->next = NULL;
    delete (current);
    return *head;
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

    delete_lastnode(&head);
    print(head);

    return 0;
}