#include<iostream>
#define SIZE 10
int hash_ele;
int *p,*q;
using namespace std;
struct node
{
    int data;
    struct node *next;
}*temp,*a,*pp[SIZE];
class seperate
{
public:
    void assignn()
    {
        for(int i=0;i<SIZE;i++)
            pp[i]=NULL;
    }
    void seperate_chain();
    void display();
}se;
void seperate::seperate_chain()
{
    int pos;
    for(int i=0;i<hash_ele;i++)
    {
        temp=new node;
        temp->data=q[i];
        temp->next=NULL;
        pos=q[i]%SIZE;
        if(pp[pos]==NULL)
        {
            pp[pos]=temp;
        }
        else
        {
            a=pp[pos];
            while(a->next!=NULL)
                a=a->next;
            a->next=temp;
        }
    }
}
void seperate::display()
{
    cout<<"\nThe elements in the hash table by separate chaining are\t";
    for(int i=0;i<SIZE;i++)
    {
        if(pp[i]!=NULL)
        {
            cout<<"\nPosition "<<i;
            a=pp[i];
            while(a!=NULL)
            {
                cout<<"\t"<<a->data;
                a=a->next;
            }
        }
    }
}
class linear
{
public:
    void linear_probing();
    void display()
    {
        cout<<"\nThe elements in the hash table by linear probing are";
        for(int i=0;i<SIZE;i++)
        {
            if(p[i]!=NULL)
                cout<<"\nPosition "<<i<<"\t"<<p[i];
        }
    }
}li;
void linear::linear_probing()
{
    int pos,temp=0;
    for(int i=0;i<hash_ele;i++)
    {
        temp=0;
        pos=(q[i]%SIZE);
        if(p[pos]==NULL)
            p[pos]=q[i];
        else
        {
            for(int m=pos+1;m<SIZE;m++)
            {
                if(p[m]==NULL)
                {
                    p[m]=q[i];
                    temp=1;
                    break;
                }
            }
            for(int m=0;m<pos;m++)
            {
                if(temp==1)
                    break;
                else if(p[m]==NULL)
                {
                    p[m]=q[i];
                    break;
                }
            }
        }

    }
}
int main()
{
    cout<<"\nEnter the number of elements:\t";
    cin>>hash_ele;
    q=new int[hash_ele];
    cout<<"\nEnter the elements:\t";
    for(int i=0;i<hash_ele;i++)
    {
        cin>>q[i];
    }
    cout<<"\nSEPRATE CHAINING\n";
    se.assignn();
    se.seperate_chain();
    se.display();
    cout<<"\n\nLINEAR PROBING\n";
    p=new int[SIZE];
    for(int i=0;i<SIZE;i++)
        p[i]=NULL;
    li.linear_probing();
    li.display();
    delete[]p;
    delete[]q;
    return 0;
}


