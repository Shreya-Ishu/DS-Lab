#include<iostream>
using namespace std;
struct node{
    int key;
    struct node *left,*right;
};
struct tree {
    node *root;
    tree()
    {
        root=NULL;
    }
    node* createnode(int elm)
    {
        node *temp;
        temp = new node();
        temp->key=elm;
        temp->left=temp->right=NULL;
        return temp;
    }
    node* insert1(node *root, int data)
    {
        if(root==NULL)
        {
            root=createnode(data);
            return root;
        }
        if(data<=root->key)
        {
            root->left=insert1(root->left, data);
            return root;
        }
        else if(data>root->key)
        {
            root->right=insert1(root->right, data);
            return root;
        }
    }
    void inorder(node *root)
    {

        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
   
    void preorder(node *root)
    {

        if(root==NULL)
            return;
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(node *root)
    {
        if(root==NULL)
            return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
    node* delete1(node *root,int data1)
    {
    if(root->left==NULL && root->right==NULL)
    {
        delete root;
        root=NULL;

    }
    else if(root->left==NULL)
    {
        node *temp=root;
        root=root->right;
        delete temp;
    }
    else if(root->right==NULL)
    {
        node *temp=root;
        root=root->left;
        delete temp;
    }
    else
    {
        node *temp=findmin(root->right);
        root->key=temp->key;
        root->right=delete1(root->right,temp->key);
    }
    return root;
}
node* findmin(node *root)
{
    node *temp=root;
    temp->key=root->key;
    while(root->left!=NULL)
    {
        if(temp->key < root->key)
        {
            temp->key=root->key;
            root=root->left;
        }
    }
    return temp;
}
};
int main()
{

    tree t;
    int n;
    cout<<"enter no of elements u want to insert in a tree";
    cin>>n;
    int data;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        t.root = t.insert1(t.root, data);
    }
    t.inorder(t.root);
    cout<<endl;
    t.preorder(t.root);
    cout<<endl;
    t.postorder(t.root);
    cout<<"enter no. you want to  delete ";
    int data1;
    cin>>data1;
 	t.delete1(t.root,data1);
    t.inorder(t.root);
    
}
