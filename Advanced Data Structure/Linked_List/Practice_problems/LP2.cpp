// Question2: Given the head of a sorted Linked List, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

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

void deleteDuplicateNode(Node *&head)
{
    Node *current = head;
    while (current != NULL) // Focus here.
    {
        while(current->next!=NULL &&current->a==current->next->a)
        {
        Node *temp = current->next;
        current->next = current->next->next;
        free(temp);
        }
        // this loop ends when current node and next node values are different.
        // or linked list ends.
        current = current->next;
    }
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
    createLinkedList(head, 5);
    print(head);
    deleteDuplicateNode(head);
    print(head);
    return 0;
}