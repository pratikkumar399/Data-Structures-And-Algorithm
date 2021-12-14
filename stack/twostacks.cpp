// C++ program to check if the given
// stacks are equal or not

#include <bits/stdc++.h>
using namespace std;

// Function to check if the two given
// stacks are same
bool isSameStack(stack<string> stack1, stack<string> stack2)
{
    // Create a flag variable
    bool flag = true;

    // Check if size of both stacks are same
    if (stack1.size() != stack2.size())
    {
        flag = false;
        return flag;
    }

    // Until the stacks are not empty
    // compare top of both stacks
    while (stack1.empty() == false)
    {
        // If the top elements of both stacks
        // are same
        if (stack1.top() == stack2.top())
        {
            // Pop top of both stacks
            stack1.pop();
            stack2.pop();
        }
        else
        {
            // Otherwise, set flag to false
            flag = false;
            break;
        }
    }

    // Return flag
    return flag;
}

// Driver Code
int main()
{
    // Creating stacks
    stack<string> stack1;
    stack<string> stack2;

    // Inserting elements to stack1
    stack1.push("Geeks");
    stack1.push("4");
    stack1.push("Geeks");
    stack1.push("Welcomes");
    stack1.push("You");

    // Inserting elements to stack2
    stack2.push("Geeks");
    stack2.push("4");
    stack2.push("Geeks");
    stack2.push("Welcomes");
    stack2.push("You");

    if (isSameStack(stack1, stack2))
        cout << "Stacks are Same";
    else
        cout << "Stacks are not Same";

    return 0;
}
