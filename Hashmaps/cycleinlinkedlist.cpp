#include <iostream>
#include <unordered_map>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

bool containsCycle(node *head)
{
    // complete this function using hashtable
    unordered_map<node*, bool> hashtable;

    node *temp = head;

    while (temp != NULL)
    {
        // check if it already exists in the hashtable

        if (hashtable.count(temp) != 0)
        {
            return true;
        }

        hashtable[temp] = true;
        temp = temp->next;
    }
    return false;
}

void insertAtHead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}

int main()
{
    node *a = NULL;
    insertAtHead(a, 10);
    insertAtHead(a, 20);
    insertAtHead(a, 30);
    insertAtHead(a, 40);
    insertAtHead(a, 50);
    // insertAtHead(a, 10);

    node *temp = a->next->next->next->next;
    temp->next = a->next->next;

    if (containsCycle(temp))
    {
        cout << "Contains Cycle" << endl;
    }
    else
    {
        cout << "Does not contain Cycle" << endl;
    }

    return 0;
}