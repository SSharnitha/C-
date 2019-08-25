#include<iostream>
using namespace std;

int main()
{
		int i,num,flag=0;
		cout<<"enter the num:"'
		cin>>num;

        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag++;
                break;
            }
        }

        if(flag==0)
            cout<<"Prime";
        else
            cout<<"Prime";
		return 0;
}
