//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */

class ListNode
{

public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

ListNode *takeinput_better()
{
    int val;
    cin >> val;
    ListNode *head = NULL;
    ListNode *tail = NULL;

    while (val != -1)
    {
        ListNode *newNode = new ListNode(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {

            tail->next = newNode;
            tail = tail->next;
        }
        cin >> val;
    }

    return head;
}

void sorted_list(ListNode *head)
{

    ListNode *current = head, *index = NULL;
    int temp;
    if (head == NULL)
        return;

    else
    {
        while (current != NULL)
        {
            index = current->next;
            while (index != NULL)
            {
                if (current->val > index->val)
                {
                    temp = current->val;
                    current->val = index->val;
                    index->val = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

// to remove duplicate nodes if any 1 2 3 4 4 5 => 1 2 3 4 5
void remove_duplicates(ListNode *head)
{
    if (head == NULL)
        return;

    ListNode *temp = head, *p = head->next;

    int pre = head->val;
    while (p != NULL)
    {
        if (pre != p->val)
        {
            temp->next = p;
            pre = p->val;
            temp = temp->next;
        }
        p = p->next;
    }
    temp->next = NULL;
}

// to remove all the duplicate nodes and make the array unique 1 2 3 4 4 5 =>  1 2 3 5
void delete_duplicate_value(ListNode *head)
{
    ListNode *current = head;
    ListNode *previous = NULL;
    ListNode *ahead = head;

    while (current)
    {
        // if a duplicate value is found at any current node
        if (current->next && current->val == current->next->val)
        {
            // since the list is sorted skip all the consecutive duplicate nodes
            while (current->next && current->val == current->next->val)
            {
                current = current->next;
            }
            if (previous == NULL)
            {
                head = current->next;
                previous = NULL;
            }
            else
            {
                previous->next = current->next;
            }
            // move the index to the next node
            current = current->next;
        }
        else
        { // if there is no  duplicate node found just traverse the nodes
            previous = current;
            current = current->next;
        }
    }
}

bool palindrome_linked_list(ListNode *head)
{
}

void reverse(ListNode *head)
{
}

void print(ListNode *head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    ListNode *head = takeinput_better();

    print(head);
    sorted_list(head);
    cout << endl;
    print(head);
    remove_duplicates(head);
    cout << endl;
    print(head);
    delete_duplicate_value(head);
    cout << endl;
    print(head);
    return 0;
}