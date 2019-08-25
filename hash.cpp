#include<iostream>
using namespace std;
struct node
{
    int ele;
    struct node* next;
}*head=NULL;
class seperate
{
        struct node a[10];
    public:
        void display();
        void hasing();
};
void seperate::hashing()
{
    for(i=0;i<10;i++)
    {
        int ele,k;
        cout<<"Enter the ele:";
        cin>>ele;
        k=ele%10;
        if(a[k]->head==NULL)



    }
}
