//#include<stdio.h>
//#include<conio.h>
//
//struct node
//{
//	int data;
//	struct node * next;
//};
//
//struct node * add_node(struct node * first,struct node * newnode)
//{	
//	struct node *temp=first;
//	if(first==NULL)
//		first=newnode;
//	else if(first->next==NULL)
//		first->next=newnode;
//	else
//	{
//		while(temp->next!=NULL)
//		{
//			temp=temp->next;
//		}
//		temp->next=newnode;
//	}
//	return first;	
//}
//
//void display_list(struct node * first)
//{	
//	struct node * temp = first;
//	if(temp==NULL)
//		printf("\nList is empty ");
//	else
//	{
//		while(temp!=NULL)
//		{
//			printf("\n%d",temp->data);
//			temp=temp->next;
//		}
//	}
//}
//
//int largest_node(struct node * first)
//{	
//	int large;
//	struct node * temp=first;
//	if(temp==NULL)
//	{
//		printf("\nLinked list is empty ");
//		return 0;
//	}
//	else if(temp->next==NULL)
//	{
//		return temp->data;
//	}	
//	else
//	{
//		large=temp->data;
//		while(temp!=NULL)
//		{
//			if(temp->data > large)
//			{
//				large=temp->data;
//			}
//			temp=temp->next;
//		}
//		return large;
//	}
//}
//
//int smallest_node(struct node * first)
//{	
//	int small;
//	struct node * temp=first;
//	if(temp==NULL)
//	{
//		printf("\nLinked list is empty ");
//		return 0;
//	}
//	else if(temp->next==NULL)
//	{
//		return temp->data;
//	}	
//	else
//	{
//		small=temp->data;
//		while(temp!=NULL)
//		{
//			if(temp->data < small)
//			{
//				small=temp->data;
//			}
//			temp=temp->next;
//		}
//		return small;
//	}
//}
//
//void hr()
//{
//	printf("\n__________________________________________________________________ \n");
//}
//void main()
//{
//	int size,i,largest,smallest;
//	struct node *first=NULL,*newnode=NULL;
//	hr();
//	printf("\nEnter no. of ele. for linked list : ");
//	scanf("%d",&size);
//	hr();
//	for(i=1;i<=size;i++)
//	{
//		newnode=(struct node *) malloc(sizeof(struct node));
//		printf("\n Enter data %d : ",i);
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		first=add_node(first,newnode);
//	}
//	
//	hr();
//	printf("Largest element is -> %d ",largest_node(first));
//	hr();
//
//	hr();
//	printf("Smallest element is -> %d ",smallest_node(first));
//	hr();
//	getch();
//}
///*
//
//__________________________________________________________________
//
//Enter no. of ele. for linked list : 5
//
//__________________________________________________________________
//
// Enter data 1 : 12
//
// Enter data 2 : 32
//
// Enter data 3 : 21
//
// Enter data 4 : 25
//
// Enter data 5 : 69
//
//__________________________________________________________________
//Largest element is -> 69
//__________________________________________________________________
//
//__________________________________________________________________
//Smallest element is -> 12
//__________________________________________________________________
//
//*/