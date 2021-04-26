#include <stdio.h>
#include <stdlib.h>
struct student {
char student_name[20];
int id;
int birthdate_day,birthdate_month,bithdate_year;
int scoreOf_lastyear;
};
struct node {
    struct student data;
    struct node *next;
};
int n,i;
struct node *new;
struct node *head;
struct node *tail;
struct student insert(struct student y);
void insert_first (struct student x);
void insert_end (struct student x);
void insert_middle (struct student x,int y);
int main()
{n=0;
int m;
int k;
struct student s;
head=NULL;
tail=NULL;
printf("enter the number of students");
scanf("%i",&m);
for (i=1;i<=m;i++)
{
    insert_end(s);
}
insert_first (s);
insert_middle(s,m);


    return 0;
}
void insert_first (struct student x)
{
    if(n==0)
    {
     new=(struct node* )malloc(sizeof(struct node));
     head=tail=new ;
     new->next=NULL;
    new->data= insert(x);
    }
    else
    {
    new=(struct node* )malloc(sizeof(struct node));
     new->next=head;
     head=new;
    new->data= insert(x);
    }
    n++;
}
void insert_end (struct student x)
{
    if(n==0)
    {
     new=(struct node* )malloc(sizeof(struct node));
     head=tail=new ;
     new->next=NULL;
    new->data= insert(x);

    }
    else
    {
    new=(struct node* )malloc(sizeof(struct node));
    tail->next=new;
    new->next=NULL;
    tail=new;
    new->data= insert (x);

    }
    n++;
}

struct student insert(struct student y)
{
printf("enter name of student %i\n",i);
fflush(stdin);
scanf("%*c");
fgets(y.student_name,sizeof(y.student_name),stdin);
printf("enter id of student %i\n",i);
scanf("%i",&(y.id));
printf("enter day of the birth of the student %i\n",i);
scanf("%i",&(y.birthdate_day));
printf("enter month of the birth of the student %i\n",i);
scanf("%i",&(y.birthdate_month));
printf("enter year of the birth of the student %i\n",i);
scanf("%i",&(y.bithdate_year));
return y;
}
void insert_middle (struct student x,int y)
{
    int d;//counter
    struct node *crun;
new=(struct node* )malloc(sizeof(struct node));
crun=head;
 if((y+1)%2==0)
 {
  for(d=1;d<(y+1)/2;d++)
  {
      crun=crun->next;
  }
  new->next=crun->next;
  crun->next=new;
   printf("\n enter the new student \n");
  new->data=insert(x);
n++;
 }
 else
 {
   for(d=1;d<=y/2;d++)
   {
       crun=crun->next;
   }
     new->next=crun->next;
  crun->next=new;
  printf("\n enter the new student \n");
  new->data=insert(x);
n++;
 }

}

