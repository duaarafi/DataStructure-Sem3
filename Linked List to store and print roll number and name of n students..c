//Linked List to store and print roll number and name of n students

#include<stdio.h>
#include<stdlib.h>

struct node {
	int roll;
	char name[50];
	struct node *next;
};

int main()
{
	int n;
	int i;
	struct node *newnode;
	struct node *head = NULL; 
	struct node *temp = NULL; 

	printf("Enter the number of students: ");
	scanf("%d",&n);

	for(i = 1; i <= n; i++)
	{
		newnode = (struct node*)malloc(sizeof(struct node));

		if (newnode == NULL) {
            printf("Memory allocation failed. Exiting.\n");
        }

		printf("\nEnter the details for student %d:\n", i);

		printf("Roll Number: ");
		scanf("%d", &newnode->roll); 
            
		printf("Name: ");
	    scanf(" %s",&newnode->name);
		newnode->next = NULL;

		if(head == NULL)
		{
			head = newnode;
			temp = newnode; 
		}
		else
		{
			temp->next = newnode;
			temp = newnode; 
		}
	}
    printf("\n-----STUDENT DETAILS-----\n");
    temp = head; 
    
    if (temp == NULL) {
        printf("The list is empty.\n");
    }

    while(temp != NULL)
    {
    	printf("Roll Number: %d | Name: %s\n", temp->roll, temp->name);
    	temp = temp->next;
	}

    
    return 0;
}
