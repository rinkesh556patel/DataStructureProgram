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
//struct node * merge_sorted_list(struct node * first1,struct node * first2)
//{	
//	struct node *temp1=first1,*temp2=first2,*first3=NULL,*newnode=NULL;
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
//		while(temp1!=NULL && temp2!=NULL )
//		{
//			newnode=(struct node *)malloc(sizeof(struct node));
//			newnode->next=NULL;
//			if(temp1->data == temp2->data)
//			{
//				newnode->data=temp1->data;
//				first3=add_node(first3,newnode);
//				temp1=temp1->next;
//				temp2=temp2->next;
//			}
//			else if(temp1->data < temp2->data)
//			{
//				newnode->data=temp1->data;
//				first3=add_node(first3,newnode);
//				temp1=temp1->next;
//			}
//			else if(temp1->data > temp2->data)
//			{
//				newnode->data=temp2->data;
//				first3=add_node(first3,newnode);
//				temp2=temp2->next;
//			}
//		}
//		while(temp1!=NULL)
//		{
//			newnode=(struct node *)malloc(sizeof(struct node));
//			newnode->next=NULL;
//			newnode->data=temp1->data;
//			first3=add_node(first3,newnode);
//			temp1=temp1->next;	
//		}
//		while(temp2!=NULL)
//		{
//			newnode=(struct node *)malloc(sizeof(struct node));
//			newnode->next=NULL;
//			newnode->data=temp2->data;
//			first3=add_node(first3,newnode);
//			temp2=temp2->next;	
//		}
//		return first3;
//	}
//}	
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
//	first3=merge_sorted_list(first1,first2);
//	hr();
//	printf("\n Sorted merged linked list : ");
//	hr();
//	display_list(first3);
//	
//	getch();
//}
///*
//
//__________________________________________________________________
//
//Enter no. of ele. for linked list 1 : 5
//
//__________________________________________________________________
//
// Enter data 1 : 1
//
// Enter data 2 : 3
//
// Enter data 3 : 4
//
// Enter data 4 : 6
//
// Enter data 5 : 9
//
//__________________________________________________________________
//
//Enter no. of ele. for linked list 2 : 4
//
//__________________________________________________________________
//
// Enter data 1 : 2
//
// Enter data 2 : 5
//
// Enter data 3 : 7
//
// Enter data 4 : 9
//
//__________________________________________________________________
//
// Sorted merged linked list :
//__________________________________________________________________
//
//1
//2
//3
//4
//5
//6
//7
//9
//*/