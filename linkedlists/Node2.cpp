#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
} ;


void insertNodeAtTail(Node* &head , int value ){

    Node* temp = new Node(value) ;
    temp->data = value ;
    temp->next = NULL ;

    Node *current = head ;

        if(head == NULL){
            head = temp ;
            return ;
          }

       else{
           while(current->next != NULL) {
                  current = current->next ;
           }
            current->next = temp ;

       }
}

void display(Node* head) {
Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"NULL" <<endl ;
}



main()
{
    Node *head = NULL ;
    insertNodeAtTail(head , 1) ;
    insertNodeAtTail(head , 2) ;
    insertNodeAtTail(head , 3) ;
    insertNodeAtTail(head , 4) ;
    display(head) ;
    return 0;
}