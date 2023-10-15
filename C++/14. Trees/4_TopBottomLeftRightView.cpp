#include <iostream>
#include <queue>
#include <map>
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


void printTopView(Node* root){
    if(root == NULL){
        return;
    }
    // Create a map for storing HD(Horizontal Distance) -> TopNode -> data
    map<int, int> topNode;

    // Level order
    // We will store a pair consisting of Node and Horizontal Distance
    queue <pair <Node*, int> > q;
    q.push(make_pair(root, 0));

    while(!q.empty()){
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        // Check if hd is the answer or not
        if(topNode.find(hd) == topNode.end()){
            // Create entry
            topNode[hd] = frontNode->data;
        }
        if(frontNode -> left){
            q.push(make_pair(frontNode->left, hd-1));
        }
        if(frontNode -> right){
            q.push(make_pair(frontNode->right, hd+1));
        }
    }

    cout << "Printing the Top View: " << endl;
    for(auto i: topNode){
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;
}
void printBottomView(Node* root){
    if(root == NULL){
        return;
    }
    // Create a map for storing HD(Horizontal Distance) -> TopNode -> data
    map<int, int> topNode;

    // Level order
    // We will store a pair consisting of Node and Horizontal Distance
    queue <pair <Node*, int> > q;
    q.push(make_pair(root, 0));

    while(!q.empty()){
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        
        // Create entry
        topNode[hd] = frontNode->data;

        if(frontNode -> left){
            q.push(make_pair(frontNode->left, hd-1));
        }
        if(frontNode -> right){
            q.push(make_pair(frontNode->right, hd+1));
        }
    }

    cout << "Printing the Bottom View: " << endl;
    for(auto i: topNode){
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;
}

void printRightView(Node* root, vector<int> &ans, int level){
    if(root == NULL){
        return;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }

    // Right
    printRightView(root->right, ans, level+1);
    // Left 
    printRightView(root->left, ans, level+1);
}
void printLeftView(Node* root, vector<int> &ans, int level){
    if(root == NULL){
        return;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }

    // Left 
    printLeftView(root->left, ans, level+1);
    // Right
    printLeftView(root->right, ans, level+1);
}

int main()
{
    Node* root = buildTree();
    // printTopView(root);
    // printBottomView(root);

    // Left View:

    // vector<int> ans;
    // int level = 0;
    // printLeftView(root, ans, level);

    // cout << "Printing Left View: " << endl;
    // for(auto i: ans){
    //     cout << i << " ";
    // }
    // cout << endl;

    // Right View:

    vector<int> ans;
    int level = 0;
    printRightView(root, ans, level);

    cout << "Printing Right View: " << endl;
    for(auto i: ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}