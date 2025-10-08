//Traverse a single linked list
//Linked List to store and print roll number, name and age of 3 students.
#include<stdio.h>
struct node
{
	int roll;
	char name[45];
	int age;
	struct node *next;
};
int main()
{
	struct node s1;
	struct node s2;
	struct node s3;
	
	printf("Enter the roll no., name and age of student1: ");
	scanf("%d %s %d",&s1.roll,&s1.name,&s1.age);
	printf("Enter the roll no., name and age of student2: ");
	scanf("%d %s %d",&s2.roll,&s2.name,&s2.age);
	printf("Enter the roll no., name and age of student3: ");
	scanf("%d %s %d",&s3.roll,&s3.name,&s3.age);
	
	s1.next=&s2;
	s2.next=&s3;
	s3.next=NULL;
	
	struct node *h;
	h=&s1;
	
	struct node *p;
	p=h;
	while(p !=NULL)
	{
		printf("\nRoll No: %d | Name: %s | Age: %d", p->roll, p->name, p->age);
		p = p->next;
	}
	return 0;
}
