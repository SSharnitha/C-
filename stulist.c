#include<stdio.h>
#include<stdlib.h>
struct node* create(int,int);
void insert(int,int);
void search();
struct node
{
	int reg,tot;
	struct node* next;
}*head=NULL,*p,*tempcell,*newnode;
int main()
{
	int opt,ch,reg,tot,x;

	do
	{
		printf("enter the choice:\n");
		printf("\n1.insert2.search");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("enter reg,tot");
				scanf("%d%d",&reg,&tot);
				insert(reg,tot);
				break;
			}
			case 2:
			{
				printf("enter the value of x");
				scanf("%d",&x);
				search(x);
				break;
}
}
printf("enter 1 or 0");
scanf("%d",&opt);
}while(opt!=0);
return 0;
}
struct node * create(int reg,int tot)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->reg=reg;
	newnode->tot=tot;
	newnode->next=NULL;
	return newnode;
}
void insert(int reg,int tot)
{
	if(head==NULL)
		head=create(reg,tot);
	else
	{
		tempcell=create(reg,tot);
		p=head;
		while(p->next!=NULL)
			p=p->next;
		p->next=tempcell;
	}
}
void search(int x)
{
	if(head==NULL)
		printf("list empty");
	else
	{
		p=head;
		while(p->next!=NULL)
		{
		if(x==p->reg)
			{
				printf("\nthe detail is:%d\t%d\t",p->reg,p->tot);
				return;
            }
		p=p->next;
        }
        printf("element not found");
    }
}









