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

Node *insert_begin(Node *head, int data)
{
    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;
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
    int data1 , data2;
    cout<<"Enter the element that you want  to insert in the beginning : " ; 
    cin >> data1;
    cout<<"Enter the element that you want  to insert at the last : " ; 
    cin >> data2 ;

    head = insert_begin(head, data1);
    head = insert_end(head, data2);
    print(head);

  

    return 0;
}