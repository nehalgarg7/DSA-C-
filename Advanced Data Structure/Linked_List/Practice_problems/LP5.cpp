// Question5 : Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.****

#include <iostream>
using namespace std;

class Node
{
public:
    int a;
    Node *next;

    Node(int val)
    {
        a = val;
        next = NULL;
    }
};

void createLinkedList(Node *&head, int val)
{
    Node *temp = head;
    if (temp == NULL)
    {
        Node *newNode = new Node(val);
        newNode->next = temp;
        temp = newNode;
        head = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        temp->next = newNode;
    }
}

Node* reverse_K_LL(Node *&head, int k)
{
    Node *prevptr = NULL;
    Node *currptr = head;

    int counter = 0; // for counting first k nodes
    while (currptr != NULL && counter < k)
    {
        Node *nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }

    if (currptr != NULL)
    {
        Node *new_head = reverse_K_LL(currptr,k);
        head->next = new_head;
    }
    return prevptr;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->a << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    Node *head = NULL;

    createLinkedList(head, 1);
    createLinkedList(head, 2);
    createLinkedList(head, 3);
    createLinkedList(head, 4);
    createLinkedList(head, 5);
    createLinkedList(head, 6);
    print(head);
    // deleteNodeAtAlternatePosition(head);
    Node* temp = reverse_K_LL(head,4);
    print(temp);
    return 0;
}