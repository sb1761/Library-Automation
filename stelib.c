
#include <stdio.h>
#include <stdlib.h>
#include"registration.c"
#include"cataloging.c"
#include"issue.c"
#include"returning.c"

void registration();
void cataloging();
void issue();
void returning();
void main()
{

	printf("WELCOME TO STEVE LIBRARY AUTOMATION SYSTEM\n");
	int select;
	printf("Enter one of the options provided to explore the system\n");
	printf("Enter 1 for registration\n");
	printf("Enter 2 for cataloging\n");
	printf("Enter 3 for issue\n");
	printf("Enter 4 for returning\n");
	printf("Enter 0 for exit\n");

	do
	{

		printf("Continue ...\n");
		scanf("%d", &select);
		switch(select)
		{

			case 1:
				registration();
				printf("\n");
				break;

			case 2:
				cataloging();
				printf("\n");
				break;

			case 3:
				issue();
				printf("\n");
				break;

			case 4:
				returning();
				printf("\n");
				break;

			case 0:
				printf("Exiting system, adios\n");
				break;

			default:
				printf("Oh men, you've entered a wrong option\n");

		}


	}while(select != 0);

}
