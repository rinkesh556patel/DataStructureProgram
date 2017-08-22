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
//			printf(" -> %d",temp->data);
//			temp=temp->next;
//		}
//	}
//}
//
//struct node * concate_list(struct node * first1,struct node * first2)
//{	
//	struct node * temp1=first1,* temp2=first2;
//	if(temp1==NULL)
//	{
//		printf("\nFirst linked list is empty ");
//		return first2;
//	}
//	else if(temp2==NULL)
//	{
//		printf("\nSecond linked list is empty ");
//		return first1;
//	}
//	else
//	{
//		while(temp1->next!=NULL)
//		{
//			temp1=temp1->next;
//		}
//		temp1->next=first2;
//		return first1;
//	}
//}
//void hr()
//{
//	printf("\n__________________________________________________________________ \n");
//}
//void main()
//{
//	int size1,size2,i;
//	struct node *first1=NULL,*first2=NULL,*newnode=NULL,*first3;
//	hr();
//	printf("\nEnter no. of ele. for linked list 1 : ");
//	scanf("%d",&size1);
//	hr();
//	for(i=1;i<=size1;i++)
//	{
//		newnode=(struct node *) malloc(sizeof(struct node));
//		printf("\n Enter data %d : ",i);
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		first1=add_node(first1,newnode);
//	}
//	hr();
//	printf("\nEnter no. of ele. for linked list 2 : ");
//	scanf("%d",&size2);
//	hr();
//	for(i=1;i<=size2;i++)
//	{
//		newnode=(struct node *) malloc(sizeof(struct node));
//		printf("\n Enter data %d : ",i);
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		first2=add_node(first2,newnode);
//	}
//
//	first3=concate_list(first1,first2);
//	hr();
//	printf("\n Concated linked list : ");
//	hr();
//	display_list(first3);
//	
//	getch();
//}
///*
//
//__________________________________________________________________
//
//Enter no. of ele. for linked list 1 : 4
//
//__________________________________________________________________
//
// Enter data 1 : 1
//
// Enter data 2 : 3
//
// Enter data 3 : 5
//
// Enter data 4 : 9
//
//__________________________________________________________________
//
//Enter no. of ele. for linked list 2 : 5
//
//__________________________________________________________________
//
// Enter data 1 : 12
//
// Enter data 2 : 23
//
// Enter data 3 : 25
//
// Enter data 4 : 69
//
// Enter data 5 : 68
//
//__________________________________________________________________
//
// Concated linked list :
//__________________________________________________________________
// -> 1 -> 3 -> 5 -> 9 -> 12 -> 23 -> 25 -> 69 -> 68
//*/