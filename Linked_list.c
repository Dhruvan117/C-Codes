#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employ                                  //Non premitive data type that we want to use.
{
	char name[30];
	int day;
	int month;
	int year;
	struct employ *next;
};

struct employ *first=NULL;                     //first node is by default NULL


struct employ* addEmployDetails()              //this will allocate memory to data type struct employ
{
	struct employ *new;
	new = (struct employ*) malloc(sizeof(struct employ));
	return new;
}

void insertEmployData()                        //here node data will be filled
{
	struct employ *temp,*helper;
	temp = addEmployDetails();
	printf("Enter a new employ name, enter day, month and year(add all values seperated by space).\n");
	//gets(temp->name);
	scanf("%s %d %d %d",&temp->name,&temp->day,&temp->month,&temp->year);

	temp->next = NULL;

	if(first == NULL)
	{
		first = temp;
	}
	else
	{
		helper=first;
		while(helper->next!=NULL)
		{
			helper = helper->next;
		}
		helper->next = temp;
	}
	printf("New employ data added successfully.\n");
}


void deleteEmployData()                            //This function will delete data using queue algorithm
{
	struct employ *remove;
	if(first==NULL)
	{
		printf("This list is allready empty.\n");
	}
	else
	{
		remove=first;
		first = first->next;
		free(remove);
	}
}

void getDetails()                             //This function will show all linked list data 
{
	struct employ *helper;
	int i=1;
	char compareName[30];
	printf("input the name that you want to fine.");
	scanf("%s",compareName);
	if(first==NULL)
	{
		printf("List is empty.\n");
	}
	else
	{
		helper = first; 

		while(helper!=NULL)
		{
			
			i = strcmp(compareName,helper->name);
			if(i==0)
			{
				printf("Data is found.\n");
				printf("Name : %s, Date of joining : %d/%d/%d\n",helper->name,helper->day,helper->month,helper->year);
				break;
			}
			helper = helper->next;
		}
	}
}


int menu()                                       //Menu for chosing action perform on linked list
{
	int number;
	//insertEmploy();
	printf("\n1. Add employ details in list.");
	printf("\n2. Delete first employ details.");
	printf("\n3. Get details.");
	printf("\n4. Exit.");
	printf("\n\nPlease enter number to execute one of the task mention above.\n");
	scanf("%d",&number);
	return(number);
}







void main()                                              //main program
{
	while(1)
	{
		switch(menu())
		{
			case 1:
			{
				insertEmployData();
				break;
			}
			case 2:
			{
				deleteEmployData();
				break;
			}
			case 3:
			{
				getDetails();

				break;
			}
			case 4:
			{
				exit(0);
				break;
			}
			default:
			{
				printf("Invalid entry.");
				break;
			}
		}
	}
}
