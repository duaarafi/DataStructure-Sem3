//Insert node at the beginning of Linked List

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node* insertBeginning(int n,struct node *head)
{
	struct node *new;
	new=(struct new*)malloc(sizeof(struct node));
	printf("Enter data to add in the beginning of linked list: ");
	scanf("%d",&n);
	new->data=n;
	new->next=head;
	head=new;
	return head;
}

void display(struct node *temp,struct node *head)
{
	temp=head;
	while(temp!=NULL)
	{
		printf("DATA : %d\n",temp->data);
		temp=temp->next;
	}
	return 0;
}

int main()
{
	int m;
	int i;
	int n;
	struct node *head=NULL;
	struct node *node;
	struct node *temp=NULL;
	
	printf("Please enter the number of nodes you want to create: ");
	scanf("%d",&m);
	
	for(i=1;i<=m;i++)
	{
	    node=(struct node*)malloc(sizeof(struct node));
	    printf("Enter the number for node %d: ", i);
	    scanf("%d", &node->data);
	    node->next=NULL;
	    
	    if(head==NULL)
	    {
	    	head=node;
	    	temp=node;
		}
		else
		{
		    temp->next=node;
			temp=node;	
		}
}
	printf("\n-----LINKED LIST DISPLAYED-----\n");
	
	display(temp,head);
	head = insertBeginning(n, head);
	//insertBeginning(n,head);
	
	printf("\n-----LINKED LIST UPDATED DISPLAYED-----\n");
    
    display(temp,head);
    
	return 0;
	
}

