// Preorder Inorder Postorder traversal in one traversal

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        left = NULL;
        right = NULL;
        val = data;
    }
};

void f(Node* root, vector<int> &pre,vector<int> &in,vector<int> &pos){
        stack<pair<Node*, int>> st;
        st.push({root, 1});
        if(root == NULL) return;

        while(!st.empty()){
            auto it = st.top();
            st.pop();

            if(it.second == 1){
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);

                if(it.first->left != NULL) st.push({it.first->left, 1});
            }
            else if(it.second == 2){
                in.push_back(it.first->val);
                it.second++;
                st.push(it);

                if(it.first->right != NULL) st.push({it.first->right, 1});
            }
            else{
                pos.push_back(it.first->val);
            }
        }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> pre, in, post;
    f(root, pre, in, post);

    cout<<"preorder: ";
    for(int val: pre) cout<<val<<" ";
    cout<<endl;

    cout<<"Inorder: ";
    for(int val: in) cout<<val<<" ";
    cout<<endl;

    cout<<"Postorder: ";
    for(int val: post) cout<<val<<" ";
    cout<<endl;

    return 0;

}