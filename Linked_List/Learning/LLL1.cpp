#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) // Constructor to create a node
    {
        this -> data = val;
        this -> next = NULL;
    }
};

void insertAtHead(Node * &head, int val)
{
    Node* temp = new Node(val);
    temp-> next = head;
    head = temp;
}


void print(Node* &head)
{
    Node *temp = head;

    while(temp!=NULL)
    {
        cout << temp-> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main()
{   
    Node* head = new Node(45);
    print(head);

    insertAtHead(head, 12);

    print(head);

    return 0;
} 