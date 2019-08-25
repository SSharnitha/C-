 #include<iostream>
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
        root->left=root->right=NULL;
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
void preorder(struct node *root)

    {
        if(root==NULL) return;
        cout<<"\t"<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(struct node *root)
    {
        if(root==NULL) return;
        inorder(root->left);
       cout<<"\t"<<root->data;
        inorder(root->right);
    }
    void postorder(struct node *root)
    {
       if(root==NULL) return;
       postorder(root->left);
        postorder(root->right);
 cout<<"\t"<<root->data;
 }
 int main()
 {
 node* root=NULL;
 int ele;
 int opt;
 do
 {
 cout<<"enter the element";
 cin>>ele;
 root=insert(root,ele);
 cout<<"\npress 1 to continue";
 cin>>opt;
}while(opt==1);
cout<<"\npreorder:";
preorder(root);
cout<<"\ninorder:";
inorder(root);
cout<<"\npostorder:";
postorder(root);
}
