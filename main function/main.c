#include <stdio.h>
#include <stdlib.h>
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

