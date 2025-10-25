//Insert after given node in Linked List

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node* insertAfternode(int n,int x,struct node *head)
{
	struct node *new;
	struct node *temp;
	
	new=(struct new*)malloc(sizeof(struct node));
	printf("Enter the data after which you want to add new data: ");
	scanf("%d",&x);
	printf("Enter the new data: ");
	scanf("%d",&n);
	
	new->data=n;
    
	temp=head;
	while(temp->data!=x && temp!=NULL)
	{
		temp=temp->next;
	}	
    if(temp->data==x)
    {
    	new->next=temp->next;
    	temp->next=new;
	}
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
	int x;
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
	head = insertAfternode(n,x,head);
	
	printf("\n-----LINKED LIST UPDATED DISPLAYED-----\n");
    
    display(temp,head);
    
	return 0;
	
}

