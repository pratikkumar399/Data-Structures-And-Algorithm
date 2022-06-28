#include <iostream>
using namespace std;

// Data structure to store adjacency list nodes
struct Node
{
    int val, cost;
    Node *next;
};

// Data structure to store a graph edge
struct Edge
{
    int src, dest, weight;
};

class Graph
{
    // Function to allocate a new node for the adjacency list
    Node *getAdjListNode(int value, int weight, Node *head)
    {
        Node *newNode = new Node;
        newNode->val = value;
        newNode->cost = weight;

        // point new node to the current head
        newNode->next = head;

        return newNode;
    }

    int N; // total number of nodes in the graph

public:
    // An array of pointers to Node to represent the
    // adjacency list
    Node **head;

    // Constructor
    Graph(Edge edges[], int n, int N)
    {
        // allocate memory
        head = new Node *[N]();
        this->N = N;

        // initialize head pointer for all vertices
        for (int i = 0; i < N; i++)
        {
            head[i] = nullptr;
        }

        // add edges to the directed graph
        for (unsigned i = 0; i < n; i++)
        {
            int src = edges[i].src;
            int dest = edges[i].dest;
            int weight = edges[i].weight;

            // insert at the beginning
            Node *newNode = getAdjListNode(dest, weight, head[src]);

            // point head pointer to the new node
            head[src] = newNode;

            // uncomment the following code for undirected graph

            /*
            newNode = getAdjListNode(src, weight, head[dest]);

            // change head pointer to point to the new node
            head[dest] = newNode;
            */
        }
    }

    // Destructor
    ~Graph()
    {
        for (int i = 0; i < N; i++)
        {
            delete[] head[i];
        }

        delete[] head;
    }
};

// Function to print all neighboring vertices of a given vertex
void printList(Node *ptr, int i)
{
    while (ptr != nullptr)
    {
        cout << "(" << i << ", " << ptr->val << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}

// Graph implementation in C++ without using STL
int main()
{
    // an array of graph edges as per the above diagram
    Edge edges[] =
        {
            // (x, y, w) —> edge from `x` to `y` having weight `w`
            {0, 1, 6},
            {1, 2, 7},
            {2, 0, 5},
            {2, 1, 4},
            {3, 2, 10},
            {4, 5, 1},
            {5, 4, 3}};

    // total number of nodes in the graph (labelled from 0 to 5)
    int N = 6;

    // calculate the total number of edges
    int n = sizeof(edges) / sizeof(edges[0]);

    // construct graph
    Graph graph(edges, n, N);

    // print adjacency list representation of a graph
    for (int i = 0; i < N; i++)
    {
        // print all neighboring vertices of a vertex `i`
        printList(graph.head[i], i);
    }

    return 0;
}
