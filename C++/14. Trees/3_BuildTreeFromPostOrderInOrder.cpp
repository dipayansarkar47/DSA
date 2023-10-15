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

int findPosition(int arr[], int n, int element){
    for(int i=0; i<n; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

// build tree from preorder and inorder traversal
Node* buildTreeFromPostOrderInOrder(int inorder[], int postorder[], int &postIndex, int size, int inorderStart, int inorderEnd){

    // Base Case
    if(postIndex < 0 || inorderStart > inorderEnd){
        return NULL;
    }

    // Step 1:
    int element = postorder[postIndex--];
    Node* root = new Node(element);
    int pos = findPosition(inorder,size,element);

    // Step 2:
    root->right = buildTreeFromPostOrderInOrder(inorder,postorder, postIndex, size, pos+1, inorderEnd);
    root->left = buildTreeFromPostOrderInOrder(inorder,postorder, postIndex, size, inorderStart, pos-1);


    return root;
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


int main()  
{
    int inorder[] = {40,20,10,50,30,60};
    int postorder[] = {40,20,50,60,30,10};
    int size = 6;
    int postIndex = size-1;
    int inorderStart = 0;
    int inorderEnd = size-1;

    cout << "Building Tree: " << endl;
    Node* root = buildTreeFromPostOrderInOrder(inorder,postorder,postIndex,size, inorderStart, inorderEnd);

    cout << "Printing level order traversal: " << endl;
    levelOrdertraversal(root);

    return 0;
}