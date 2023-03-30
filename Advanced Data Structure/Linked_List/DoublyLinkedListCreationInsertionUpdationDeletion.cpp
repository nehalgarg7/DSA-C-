#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertNodeAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        // head -> prev = newNode;
        head = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtEnd(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        // head -> prev = newNode;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(data);
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void insertAtGivenPosition(Node *&head, int data, int position)
{
    if (position == 0)
    {
        insertNodeAtHead(head, data);
        return;
    }
    else
    {
        int cur_pos = 0;
        Node *temp = head;
        while (cur_pos != position - 1)
        {
            temp = temp->next;
            cur_pos++;
        }

        Node *newNode = new Node(data);
        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

void updateDoublyLinkedListAtGivenPosition(Node *&head, int data, int position)
{
    int cur_pos = 0;
    Node *temp = head;
    while (cur_pos != position)
    {
        temp = temp->next;
        cur_pos++;
    }
    temp->data = data;
}

void deleteNodeatBegining(Node *&head)
{
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void deleteNodeatEnd(Node* &head)
{
    Node* second_last = head;
    while(second_last->next->next!=NULL)
    {
        second_last=second_last->next;
    }
    Node * temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

void deleteNodeAtGivenPosition(Node* &head, int pos)
{
    Node* prev_node = head;
    int cur_pos = 0;
    while(cur_pos!=pos-1)
    {
        prev_node = prev_node->next;
        cur_pos++;
    }

    Node* temp = prev_node->next;
    prev_node->next = temp->next;
    temp->next->prev = prev_node;
    free(temp);
}
void traverseDoublyLinkedListUsingNextPointer(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL";
}

void traverseDoublyLinkedListUsingPreviousPointer(Node *&head)
{
    cout << "Iterating in reverse order using previous pointer" << endl;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << "NULL";
}

int main()
{
    Node *p = new Node(4);
    cout << p->data << " " << p->next << " " << p->prev << endl;

    Node *head = NULL;
    insertNodeAtHead(head, 7);
    insertNodeAtHead(head, 8);
    insertNodeAtHead(head, 4);
    insertNodeAtHead(head, 11);
    // insertAtEnd(head, 15);
    traverseDoublyLinkedListUsingNextPointer(head);
    cout << endl;
    // traverseDoublyLinkedListUsingPreviousPointer(head);
    insertAtGivenPosition(head, 45, 1);
    traverseDoublyLinkedListUsingNextPointer(head);
    traverseDoublyLinkedListUsingPreviousPointer(head);

    updateDoublyLinkedListAtGivenPosition(head, 1556, 2);
    cout <<"Update: " << endl;
    traverseDoublyLinkedListUsingNextPointer(head);
    cout<<"Update: "<<endl;
    traverseDoublyLinkedListUsingPreviousPointer(head);

    cout << endl;
    deleteNodeatBegining(head);
    traverseDoublyLinkedListUsingNextPointer(head);

    cout << endl;
    deleteNodeatEnd(head);
    traverseDoublyLinkedListUsingNextPointer(head);
    cout<<endl;
    traverseDoublyLinkedListUsingPreviousPointer(head);

    deleteNodeAtGivenPosition(head,1);
    cout <<"Delete: " << endl;
    traverseDoublyLinkedListUsingNextPointer(head);
    cout<<"Delete: "<<endl;
    traverseDoublyLinkedListUsingPreviousPointer(head);
    return 0;
}