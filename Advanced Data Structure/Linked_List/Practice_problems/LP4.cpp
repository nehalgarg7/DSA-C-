/*
Reverse a Linked List. (Using recursion)
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

Node *reverse(Node *&head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    else
    {
        // recursive case
        Node *newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL; // head is now pointing to last node in reverse LL.
        return newHead;
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
    Node* temp = reverse(head);
    print(temp);
    return 0;
}