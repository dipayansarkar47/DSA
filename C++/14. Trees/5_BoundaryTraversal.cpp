#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* left = NULL;
        Node* right = NULL;

        Node(int data){
            this->data = data;
            left = NULL; 
            right = NULL; 
        }
};

Node* BuildTree(){
    int data;
    cout << endl << "Enter the data: ";
    cin >> data;
    cout << endl;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    cout << "Enter the left of " << data << ": ";
    root->left = BuildTree();
    cout << "Enter the right of " << data << ": ";
    root->right = BuildTree();

    return root;
}

void printLeftBoundary(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }

    cout << root->data << " ";
    if(root->left){
        printLeftBoundary(root->left);
    }else{
        printLeftBoundary(root->right);
    }
}
void printRightBoundary(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }

    if(root->right){
        printRightBoundary(root->right);
    }else{
        printRightBoundary(root->left);
    }
    cout << root->data << " ";
}
void printLeafBoundary(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        cout << root->data << " ";
    }

    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void boundaryTraversal(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";

    printLeftBoundary(root->left);
    printLeafBoundary(root);
    printRightBoundary(root->right);
}

int main()
{
    Node* root = BuildTree();
    boundaryTraversal(root);
    return 0;
}