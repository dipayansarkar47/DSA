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
        ~Node(){

        }
};

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

Node* BSTusingInorder(int inorder[], int s, int e){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    int element = inorder[mid];
    Node* root = new Node(element);

    root->left = BSTusingInorder(inorder,s,mid-1);
    root->right = BSTusingInorder(inorder,mid+1,e);

    return root;
}

int main()
{
    int inorder[] = {1,2,3,4,5,6,7,8,9};
    int s = 0;
    int e = 8;

    Node* root = BSTusingInorder(inorder,s,e);
    levelOrdertraversal(root); 

}