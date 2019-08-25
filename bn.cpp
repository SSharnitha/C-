#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
node* insert(node *root,int data)
{
    if(root==NULL)
    {
        root=new node();
        root->data=data;
        root->left=NULL;
        root->right=NULL;
    }
    else if(data<=root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
        return root;
}
void inorder(struct node *root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<"\t"<<root->data;
    inorder(root->right);
}
node* findmin(node *root)
{
    if(root==NULL)
        return NULL;
    else if(root->left==NULL)
        return root;
    else
        return findmin(root->left);
}
node* del(int data,node *root)
{
    node* tmp=NULL;
    if(root==NULL)
    {
        cout<<"element not found";
    }
    else if(data<root->data)
        root->left=del(data,root->left);
    else if(data>root->data)
        root->right=del(data,root->right);
    else if(root->left&&root->right)
    {
        tmp=findmin(root->right);
        root->data=tmp->data;
        root->right=del(root->data,root->right);
    }
    else
    {
        tmp=root;
        if(root->left==NULL)
            root=root->right;
        else if(root->right==NULL)
            root=root->left;
        free(tmp);
    }
    return root;
}
int main()
{
    node* root=NULL;
    int ele,a;
    int opt;
    do
    {
        cout<<"enter your choice";
        cout<<"\n"<<"1:insert 2:delete 3:display";
        cin>>opt;
        switch(opt)
        {
            case 1:
                cout<<"enter the element to be inserted";
                cin>>ele;
                root=insert(root,ele);
                break;
            case 2:
                cout<<"enter the element to be deleted";
                cin>>ele;
                del(ele,root);
                break;
            case 3:
                inorder(root);
                break;
        }
        cout<<"press 1 to continue";
        cin>>a;
    }while(a==1);
}
