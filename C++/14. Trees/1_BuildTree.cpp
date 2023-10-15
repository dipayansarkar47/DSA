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
            left = NULL;
            right = NULL;
        }
};

Node* buildTree(){
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);

    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildTree();
    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildTree();

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

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight,rightHeight) + 1;
    return ans;
}

int diameterOfBinaryTree(Node* root) {
        if(root == NULL){
            return 0;
        }
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int h = height(root->left) + height(root->right);
        int ans = max(left,max(right, h));
        return ans;
}

bool isBalanced(Node* root){
    if(root == NULL){
        return false;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int diff = abs(leftHeight-rightHeight);

    bool ans = (diff <= 1);

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);

    if(ans && left && right){
        return true;
    }else{
        return false;
    }
}

bool KthAncestor(Node* root, int &k, int p){

    //         1
    //        / \    k=1
    //       2   3   p=4
    //      / \      ans = 2
    //     4   5


    if(root == NULL){
        return false;
    }
    if(root->data == p){
        return true;
    }

    bool leftAns = KthAncestor(root->left,k,p);
    bool rightAns = KthAncestor(root->right,k,p);

    if(leftAns || rightAns){
        k--;
    }
    if(k==0){
        cout <<"Ans: "<< root->data << endl;
        k=-1;
    }
    return leftAns || rightAns;
}

int main()
{
    Node* root = NULL;
    root = buildTree();
    // levelOrdertraversal(root);
    // cout << "Height: " << height(root) << endl;
    // isBalanced ? cout << "Balanced" : cout << "Not Balanced";
    int k=1, p=4;
    bool ans = KthAncestor(root,k,p);
    // ans ? cout << "Found" : cout << "Not Found";

    return 0;
}