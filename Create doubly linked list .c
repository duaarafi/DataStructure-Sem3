#include<stdio.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};

struct node* create (struct node *head,int n)
{
	struct node *newnode;
	struct node *temp;
	temp=NULL;
	int x,i;
	head= NULL;
	printf("Enter the total number of nodes you want:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	newnode= (struct node*)malloc(sizeof(newnode));
	printf("Enter Data %d: ",i);
	scanf("%d",&x);
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;

	if(head==NULL)
	{
		head=newnode;
		temp=head;
	}

	else
	{
		temp->next=newnode;
		newnode->prev= temp;
		temp=newnode;
	}
	
    }
    printf("LINKED LIST DISPLAYED:\n");
	
    return head;
}

struct node* traversal (struct node *head)
{
	struct node *temp;
	printf("LINKED LIST DISPLAYED:\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return head;
}

int main()
{
	struct node *head;
	struct node *temp;
	int n;
	head=create(head,n);
	traversal(head);
	temp=head;
	
	return 0;
}
