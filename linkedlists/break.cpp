#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    
   

    Node(int value)
    {
        this->data = value;
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


  



void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
 
}

int main()
{
    cout << "Enter the elements you want to print in the linked list . Press -1 to end the list : " <<endl ;
    Node *head = takeinput();
    display(head);
 
   

 
}