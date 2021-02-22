#include<stdio.h>
struct Node
{
	int data;
	struct Node *next;
};

struct Node *CreateList(struct Node *list,int num)
{
	if(list==NULL)
	{
		struct Node * node=(struct Node *)malloc(sizeof(struct Node));
		node->data=num;
		node->next=NULL;
		return node;
		
	}
	else
	{
		struct Node * newnode=(struct Node *)malloc(sizeof(struct Node));
		
		struct Node* temp=list;
		while(temp->next)
			temp=temp->next;
		newnode->data=num;
		newnode->next=NULL;
		
		temp->next=newnode;
		
		return list;
				
	}
	
	}
	
	void printData(struct Node *head)
	{
		printf("\n");
		if(head==NULL)
			printf("**EMPTY**\n");
		while(head)
		{
			printf("%d\t", head->data);
			
			head=head->next;
		}
		printf("\n");
	}
	
	struct Node *ClearAll(struct Node *list)
	{
		list=NULL;
		return list;
	}

main()
{
	struct Node *list=NULL;
	while(1)
	{
		printf("Enter your Option\n");
		printf("1. add data      2. print data		3.clear All     99. abort \n");
		int option,data;
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter Data\n");
				scanf("%d",&data);
				list=CreateList(list,data);
				break;
			case 2:
				printData(list);
				break;
			case 3:
				list=ClearAll(list);
				break;
			case 99:
				exit(0);
		}
	}
	
}


