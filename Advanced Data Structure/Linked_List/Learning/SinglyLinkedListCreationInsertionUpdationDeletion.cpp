// Task: Check Delete vs Free().

#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // pointer pointing to the object of class Node.

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int data) // T.C = O(1)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int data)
// T.C = O(n) , where n is number of nodes.{when tail pointer is not given}
// T.C. = O(1) , when tail pointer is given.
{
    // Traverse and come at the last node.
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // create new node..
    Node *newNode = new Node(data);
    temp->next = newNode;
    // temp = newNode;
}

void traverseSinglyLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtGivenPosition(Node *&head, int data, int pos) // Worst case T.C = O(n) , Best Case : T.C = O(1)
{
    // To insert at position pos...we have to first traverse temp pointer till pos-1.

    if (pos == 0)
    {
        insertAtHead(head, data);
        return;
    }

    else
    {
        Node *temp = head;
        int cur_pos = 0;
        while (cur_pos != pos - 1)
        {
            temp = temp->next;
            cur_pos++;
        }

        // temp is pointing to node at position (pos-1).

        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void updateLinkedListAtGivenPosition(Node *&head, int data, int pos)
// T.C = O(pos) where pos is number of nodes.
{
    int cur_pos = 0;
    Node *temp = head;
    while (cur_pos != pos) // traverse the temp to position (pos).
    {
        temp = temp->next;
        cur_pos++;
    }
    // temp is pointing to node at position (pos).
    temp->val = data;
}

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
}

void deleteAtEnd(Node *&head) // need at least 2 node for this code.

// T.C in all case means if tail node is given also then it at that case also we have to traverse till second last node. so therefore T.C. will be O(n), n is no. of nodes.
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "Linked List is empty\n";
    }
    else
    {

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Node *var = temp->next;
        temp->next = NULL;
        free(var);
    }
}

void deleteAtGivenPosition(Node *&head, int pos)
{
    if (pos == 0)
    {
        deleteAtHead(head);
        return;
    }
    else
    {
        int cur_pos = 0;
        Node *temp = head;
        while (cur_pos != pos - 1)
        {
            temp = temp->next;
            cur_pos++;
        }

        Node *temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1); 
    }
}

int main()
{
    Node *n = new Node(1); // 1. new keyword first allocate sufficient space in the heap memory for the object.
                           // 2. new keyword called constructor to create an object at the specified location.
                           // 3. it return a pointer pointing to this object of type (object datatype which is in this is of class Node)
    cout << n->val << " " << n->next << endl;

    // creation of newNode and linking it to previous one.
    // Node* newnode = new Node(2);
    // n->next = newnode;

    // cout<< n->val << " " << n->next << endl;
    // cout<< n->next->val <<endl;

    Node *head = NULL; // It is always a good practice to assign the pointer NULL to a pointer variable in case you do not have exact address to be assigned.

    /*'
    1. NULL vs Uninitialized pointer – An uninitialized pointer stores an undefined value. A null pointer stores a defined value, but one that is defined by the environment to not be a valid address for any member or object.
    2. NULL vs Void Pointer – Null pointer is a value, while void pointer is a type*/

    insertAtHead(head, 4);
    traverseSinglyLinkedList(head);
    insertAtHead(head, 5);
    traverseSinglyLinkedList(head);
    insertAtEnd(head, 1000);
    insertAtEnd(head, 1000);
    insertAtEnd(head, 1000);
    traverseSinglyLinkedList(head);
    insertAtGivenPosition(head, 156, 2);
    traverseSinglyLinkedList(head);

    updateLinkedListAtGivenPosition(head, 16798, 2);
    traverseSinglyLinkedList(head);

    deleteAtHead(head);
    traverseSinglyLinkedList(head);

    deleteAtEnd(head);
    // deleteAtEnd(head);
    // deleteAtEnd(head);
    // deleteAtEnd(head);
    // deleteAtEnd(head); Focus here.
    traverseSinglyLinkedList(head);

    deleteAtGivenPosition(head, 0);
    traverseSinglyLinkedList(head);
    return 0;
}