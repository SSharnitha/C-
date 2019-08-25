#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    fstream fin,fout;

    fin.open("Gamedata.txt",ios::out);
    long int exp;
    int avg;
    char l[50];
    cout<<"Enter the expence for the game:";
    cin>>exp;
    avg=(exp*100)/50000;
    if(avg>=80)
    {
        fin<<"Expensive";
        cout<<"expensive";
    }
    else if((avg>=60)&&(avg<80))
    {
        fin<<"Expensive";
        cout<<"Expensive";
    }
    else if((avg>=50)&&(avg<60))
    {
        fin<<"Less Expensive";
        cout<<"Less Expensive";
    }
    else if((avg>=40)&&(avg<50))
    {
        fin<<"Not costly";
        cout<<"Not costly";
    }
    else if(avg<40)
    {
        fin<<"best";
        cout<<"best";
    }
    fin.close();

    fin.open("Gamedata.txt",ios::in);
    fout.open("Gamedatacopy.txt",ios::out);

    fin.read((char*)&l,sizeof(l));
    fout.write((char*)&l,strlen(l));

    fin.close();
    fout.close();
    return 0;
}
