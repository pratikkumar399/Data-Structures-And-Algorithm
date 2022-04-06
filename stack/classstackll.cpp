#include <bits/stdc++.h>

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    // Write your code here
    int data;
    Node *next = NULL;
    Node *top = NULL;

public:
    Stack(int data)
    {
        // Write your code here
        this->data = data;
        this->next = NULL;
    }
    Stack(){};

    int getSize()
    {
        int count = 0;

        Node *trev = top;

        while (trev != NULL)

        {

            trev = trev->next;

            count = count + 1;
        }

        return count;
    }

    bool isEmpty()
    {
        // Write your code here
        if (top != NULL)
        {
            return 0;
        }
        else
            return 1;
    }

    void push(int data)
    {
        // Write your code here
        Node *temp = new Node(data);
        temp->data = data;
        temp->next = top;
        top = temp;
    }

    void pop()
    {
        // Write your code here
        top = top->next;
    }

    int getTop()
    {
        // Write your code here
        if (top != NULL)
        {
            return top->data;
        }
        else
        {
            return -1;
        }
    }
};