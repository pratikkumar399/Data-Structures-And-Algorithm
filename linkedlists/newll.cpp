// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }

    Node (int data , Node * next){
        this->data = data;
        this->next = next;
    }
};

Node *reverse(Node *head)
{
    Node *temp = head, *prev = nullptr, *current = head;

    while (current != nullptr)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return prev;
}

void display(Node *head)
{

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null";
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Node *head2 = new Node(10 , nullptr);


    // display(head);

    Node *newHead = reverse(head);
    display(newHead);

    // 10->20->30->40->null;

    return 0;
}