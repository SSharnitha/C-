#include<stdio.h>
int insert();
int del();
int display();
int count();
int search();
int create();
struct node
{
 int ele;
 struct node *next;
};
int main()
{
    int choice,opt;
    do
    {
        printf("menu:\n1.insert\n2.dele\n3.display\n4.number of nodes\n5.search");
        printf("enter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                count();
                break;
            case 5:
                search();
                break;
        }
        printf("u want to continue:");
        scanf("%d",&opt);
    }while(opt==1);
}




