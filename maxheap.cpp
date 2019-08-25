#include<iostream>
using namespace std;
class maxheap
{
        int size,pos=1;
        int mh[500];
    public:
        void createheap();
        void heapify(int);
        void delmax();
        void display();
};

void maxheap::createheap()
{
    cout<<"\n Enter the size of the max heap";
    cin>>size;
}
void maxheap::heapify(int value)
{
    mh[pos++]=value;
    int child=pos-1;
    int parent=child/2;
    if(mh[parent]<mh[child])
    {
        int temp=mh[parent];
        mh[parent]=mh[child];
        mh[child]=temp;
    }
    child=parent;
    parent=child/2;
}
void maxheap::delmax()
{
    maxheap temp;
    temp.size=size;
    for(int i=2;i<=size;i++)
    {
        temp.heapify(mh[i]);
    }
    cout<<"\nThe elements in tha heap are:\n";
    for(int i=1;i<size;i++)
        cout<<"\t"<<mh[i];
}
void maxheap::display()
{
    cout<<"\nThe elements in the heap are:\n";
    for(int i=1;i<=size;i++)
        cout<<"\t"<<mh[i];
}
int main()
{
    maxheap m;
    int ch,value,opt;
    m.createheap();
    do
    {
        cout<<"\nEnter 1.insert 2.delete 3.display";
        cout<<"\nEnter the value of ch:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nEnter the value to insert:";
                cin>>value;
                m.heapify(value);
                break;
            case 2:
                m.delmax();
                break;
            case 3:
                m.display();
                break;
            default:
                cout<<"\nEnter 1 2 or 3";
        }
        cout<<"\nEnter one to continue:";
        cin>>opt;
    }while(opt==1);
    return 0;
}
