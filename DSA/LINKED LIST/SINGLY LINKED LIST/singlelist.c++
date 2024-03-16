#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor for creating New Node
    Node(int data)
    {
        this->data = data; // In new Node Data and Null is bydefault included
        this->next = NULL;
    }
    // destructor for deleting node
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data: " << value<<endl;
    }
};

void insertAtHead(Node *&head, int d) // for new node insert at left side which is head
{
    // New node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d) // for new node insert at right side which is tail
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtPosition(Node *&head, Node *&tail, int p, int d) // new node insert at any position
{
    if (p == 1)
    { // if at the first position
        insertAtHead(head, d);
        return;
    }
    Node *temp = head; // otherwise at any position
    int cnt = 1;
    while (cnt < p - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting atlast position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void deleteNode(int p, Node* &head)
{ // deleting node by position
    if (p == 1)
    { // deleting first node
        Node *temp = head;
        head = head->next;
        // memory free
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deletin any node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < p)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10); // Creating new node by calling Node()function
    // cout << node1->data;        // If you put value the data in Node()function then the output is 10 with NULL :10&0
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;

    print(head); // head output is 10
    insertAtTail(tail, 12);
    print(head); // head output is 12 10

    insertAtTail(tail, 15);
    print(head); // head is 15 12 10

    insertAtPosition(head, tail, 1, 22); //(head,1(positioning),22(data))
    print(head);

    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;

    deleteNode(4,head );
    print(head);

    return 0;
}