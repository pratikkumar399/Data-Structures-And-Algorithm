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


Node *insert_end(Node *head, int data)
{
    Node *newnode = new Node(data);
    newnode->data =  data ;
    newnode->next =  NULL ;
    Node * temp = head ;
    if(temp == NULL){
        head = newnode ;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next ;
        }
            temp->next = newnode ;
        
    }
    return head ;  
}
void print(Node *head)
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
    Node *head = takeinput();
    print(head);
    int data;
    cin >> data;
    head = insert_end(head, data);
    print(head);
    // Node n1(1);
    // Node *head = &n1;
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;

    return 0;
}