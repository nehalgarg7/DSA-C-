/*
Question1: Given the head of a linked list, delete every alternate element from the list starting from the second element.
*/

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

void deleteNodeAtAlternatePosition(Node *&head)
{
    Node *current = head;
    while ( current != NULL && current->next != NULL) // Focus here.
    {
        Node *temp = current->next;
        current->next = current->next->next;
        free(temp);
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
    createLinkedList(head, 6);
    print(head);
    deleteNodeAtAlternatePosition(head);
    print(head);
    return 0;
}