#include<conio.h>
#include<stdio.h>
struct poly
{
    int coeff;
    int power;
    struct poly *next;
};
typedef struct poly node;
node *poly1,*poly2,*poly3;
void create_poly(node **p,int power,int coeff)
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    temp->power=power;
    temp->coeff=coeff;
 if(*p==NULL)
    *p=temp;
 else
 {
    temp->next=*p;
    *p=temp;
 } //end of if
 } //end of create_poly
void add_poly(node *poly1,node *poly2)
{
    int coeff,power;
    while((poly1!=NULL) &&(poly2!=NULL))
    {
        if(poly1->power>poly2->power)
        {
            coeff=poly1->coeff;
            power=poly1->power;
            poly1=poly1->next;
        }
        else if(poly2->power>poly1->power)
        {
            coeff=poly2->coeff;
            power=poly2->power;
            poly2=poly2->next ;

        }
        else
        {
            coeff=poly1->coeff+poly2->coeff;
            power=poly1->power;
            poly1=poly1->next;
            poly2=poly2->next;
        } //end of if-elseif
        create_poly(&poly3,power,coeff);
    } //end of while
    if(poly1==NULL)
    {
        for(;poly2!=NULL;poly2=poly2->next)
        create_poly(&poly3,poly2->power,poly2->coeff);
    }
    else if(poly2==NULL)
    {
        for(;poly1!=NULL;poly1=poly1->next)
        create_poly(&poly3,poly1->power,poly1->coeff);
    } //end of if-elseif
} //end of add_poly
void design(node **poly)
{
    char ch='y';
    int power,coeff;
    printf(\nEnter polynomial\n);
    while(ch=='y')
    {
        printf(\nEnter the power in Descending order and cofficient\nPower= );
        scanf(%d,&power);
        printf(Cofficient= );
        scanf(%d,&coeff);
        create_poly(poly,power,coeff);
        printf(\nWant to enter more\t);
        fflush(stdin);
        scanf(%c,&ch);
    } //end of while
} //end of design
void show_poly(node *p)
if(p!=NULL)
printf(%dx^%d,p->coeff,p->power);
for(p=p->next;p!=NULL;p=p->next)
{
    if(p->coeff>0)
    printf(+);
    if(p->power==0)
    printf(%d,p->coeff);
    else if(p->power==1)
    printf(%dx,p->coeff);
    else
    printf(%dx^%d,p->coeff,p->power);
} //end of for
} //end of show_poly
//main function
int main()
{
    clrscr();
    design(&poly1);
    show_poly(poly1);
    getch();
    clrscr();
    design(&poly2);
    show_poly(poly2);
    getch();
    clrscr();
    add_poly(poly1,poly2);
    printf(\nPolunomial 1 is:\t);
    show_poly(poly1);
    printf(\nPolynomial 2 is:\t);
    show_poly(poly2);
    printf(\nAdded polynomial result:\n);
    show_poly(poly3);
    getch();
    return 0;
} //end of main function

