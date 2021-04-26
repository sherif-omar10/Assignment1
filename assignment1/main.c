#include <stdio.h>
#include <stdlib.h>
struct student {
char student_name[20];
int id;
int birthdate_day,birthdate_month,bithdate_year;
int scoreOf_lastyear;
};
int n,i;
struct node *new;
struct node *head;
struct node *tail;
struct student insert(struct student y);
void insert_first (struct student x);
void insert_end (struct student x);
void insert_middle (struct student x,int y);
void intro()
{
	printf("\n\tCairo University");
	printf("\n\tFaculty of Engineering");
	printf("\n\tElectronics and Communications Engineering Department 2nd Year \n\n\n");
	printf("\t\t\t\t\t\"Assignment #1\"\n\n" );
    printf( "\t\t\t\t\t*************************\n");
	printf( "\t\t\t\t\tCoded By :\n\n" );
	printf( "\t\t\t\t\tYasmin\n" );//complete your name ^^
	printf("\t\t\t\t\tYomna\n" );//complete your name ^^
	printf( "\t\t\t\t\tSherif Omar Bkhiet\n\n" );
	printf( "\t\t\t\t\t*************************");
	printf("\n\n\n\tPress Enter To Continue\n\n");
	getc(stdin);
}
int main()
{
    n=0;
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
intro();
char c;
	do
	{
		printf( "\n\n\n\tMAIN MENU");
		printf( "\n\n\t1. INSERT FIRST");
		printf( "\n\n\t2. INSERT END");
		printf( "\n\n\t3. INSERT MIDDLE");
		printf( "\n\n\t4. EXIT");
		printf( "\n\n\tPlease Select Your Option (1-4) ");
		c = _getche();
		switch (c)
		{
		case '1':
        printf( "\nINSERT FIRST\n");//put the first function
			break;
		case '2':
			printf( "\nINSERT END\n");//put the second function
			break;
		case '3':
		    printf( "\nINSERT MIDDLE\n");//put the 3rd function
			break;
		case '4':
			break;
		default:printf("\a");
		}
	} while (c != '4');


    return 0;
}
struct node {
    struct student data;
    struct node *next;
};

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
