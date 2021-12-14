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

Node * deleteNode_n(Node *head, int index )
{  Node * p = head;
   Node * q = head->next;
   if(head==NULL){
       return NULL;
   }
   for (int i = 0 ; i < index - 1 ; i++ ){
       p =p->next ;
       q = q ->next ;
   }
   p->next =q->next ;
   delete(q) ;
   return head  ;
   
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
    int n ;
    cin>> n  ;
    deleteNode_n(head, n);
    print(head);

    return 0;
}