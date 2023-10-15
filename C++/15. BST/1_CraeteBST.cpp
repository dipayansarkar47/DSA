#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = NULL; 
            this->right = NULL; 
        }
};

Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(root->data > data){
        root->left = insertIntoBST(root->left, data);
    }else{
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
void levelOrdertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        
        q.pop();
        
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}
void inorderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    //LNR
    inorderTraversal(root->left);
    cout << root -> data << " ";
    inorderTraversal(root->right);
}
void preorderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    //NLR
    cout << root -> data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    //LRN
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root -> data << " ";
}


int main()
{
    Node* root = NULL;
    cout << "Enter the data for Node: " << endl;
    takeInput(root);
    cout << "Printing the Tree" << endl;
    levelOrdertraversal(root);
    cout << endl << "Printing Inorder: " << endl;
    inorderTraversal(root);
    cout << endl << "Printing preorder: " << endl;
    preorderTraversal(root);
    cout << endl << "Printing postorder: " << endl;
    postorderTraversal(root);

    bool ans = findNodeInBST(root,15);
    ans ? cout << "Present" : cout << "Not present";

    return 0;

    // 10 20 5 11 17 2 4 8 6 25 15 -1 
}