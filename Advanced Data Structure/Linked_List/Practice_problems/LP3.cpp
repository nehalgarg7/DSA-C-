/*
Question: Traverse/Print a Singly linked list in reverse Order.
Note: 1. Here we use recursion. 2. You had already solved it using brute-force approach on leetcode where you reversed the LL not just print is traverserly.
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

void reverse(Node *head) // we just to print the ll. not to make any changes.
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        reverse(head->next);
        cout<<head->a<<"->";
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
    reverse(head);
    return 0;
}