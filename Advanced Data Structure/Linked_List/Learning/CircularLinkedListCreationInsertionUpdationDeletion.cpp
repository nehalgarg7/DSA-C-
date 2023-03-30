// In circular(singly) linked list...there is only one next pointer.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Same concept for inserting node on front.
void insertNodeAtEnd(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        head->next = head;
    }
    else
    {
        Node *newNode = new Node(data);
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
    }
}

void countNodes(Node *&head)
{
    if (head == NULL)
    {
        cout << "Number of Nodes: 0" << endl;
    }
    else
    {
        int count = 1;
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
            count++;
        }
        cout << "Number of Nodes: " << count << endl;
    }
}

void traverseCircularLinkedList(Node *&head)
{
    if (head == NULL)
    {
        cout << "End of Circular Linked List\n";
    }
    else
    {
        Node *temp = head;
        cout << temp->data << " ";
        while (temp->next != head)
        {
            temp = temp->next;
            cout << temp->data << " ";
        }
        cout << "End of Circular Linked List\n";
    }
}

void deleteLastNode(Node *&head)
{
    if (head == NULL)
    {
        cout << "No node is present to delete\n";
    }
    else if(head->next==head){
        Node* ptr = head;
        head=NULL;
        free(ptr);
    }
    else
    {
        Node *second_last = head;
        while (second_last->next->next != head)
        {
            second_last = second_last->next;
        }
        // temp is at the last node.
        Node *p = second_last->next;
        second_last->next = head;
        free(p);
    }
}

int main()
{
    // Node *n1 = new Node(4);
    // Node *n2 = new Node(5);
    // Node *n3 = new Node(6);

    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n1;

    // Node *temp = n1;
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    Node *head = NULL;
    countNodes(head);
    insertNodeAtEnd(head, 45);
    insertNodeAtEnd(head, 18);
    traverseCircularLinkedList(head);
    countNodes(head);

    deleteLastNode(head);
    deleteLastNode(head);
    traverseCircularLinkedList(head);
    // insertNodeAtEnd(head,10);
    // cout << head->data << " " <<head->next;
    return 0;
}