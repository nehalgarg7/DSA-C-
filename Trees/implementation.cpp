#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildtree(Node *root)
{
    cout << "Enter the data";
    int val;
    cin >> val;

    Node *root = new Node(val);

    if (val == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left " << endl;
    root->left = buildtree(root->left);
    cout << "Enter data for inserting in right " << endl;
    root->right = buildtree(root->right);

    return root;
}

void levelOrderTraversal(Node* root)
{
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}



int main()
{

    Node* root = NULL;
    //creating a Tree

    root = buildtree(root);

    return 0;
}