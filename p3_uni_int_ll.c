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
//struct node * union_list(struct node * first1,struct node * first2)
//{	
//	int flag=0;
//	struct node *temp1=first1,*temp2=first2,*temp3,*first3=first1,*newnode=NULL;
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
//		while(temp2!=NULL )
//		{
//			temp1=first1;
//			flag=0;
//			while(temp1!=NULL)
//			{
//				if(temp2->data==temp1->data)
//				{
//					flag=1;
//					break;
//				}
//				temp1=temp1->next;
//			}
//			if(!flag)
//			{
//				newnode=(struct node *)malloc(sizeof(struct node));
//				newnode->data=temp2->data;
//				newnode->next=NULL;
//				first3=add_node(first3,newnode);
//			}
//			temp2=temp2->next;
//		}		
//		return first3;
//	}
//}	
//
//struct node * intersection_list(struct node * first1,struct node * first2)
//{	
//	int flag=0;
//	struct node *temp1=first1,*temp2=first2,*first3=NULL,*newnode=NULL;
//	if(temp1==NULL)
//	{
//		printf("\nFirst linked list is empty ");
//		return first3;
//	}
//	else if(temp2==NULL)
//	{
//		printf("\nSecond linked list is empty ");
//		return first3;
//	}
//	else
//	{
//		temp1=first1;
//		while(temp1->next!=NULL)
//		{
//			temp2=first2;
//			while(temp2->next!=NULL)
//			{
//				if(temp1->data == temp2->data)
//				{
//					newnode=(struct node *)malloc(sizeof(struct node));
//					newnode->data=temp2->data;
//					newnode->next=NULL;
//					first3=add_node(first3,newnode);
//					break;
//				}
//				temp2=temp2->next;
//			}
//			temp1=temp1->next;
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
//	struct node *first1=NULL,*first2=NULL,*newnode=NULL,*first3=NULL,*first4=NULL;
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
//	first3=union_list(first1,first2);
//	hr();
//	printf("\nUnion of linked list : ");
//	hr();
//	display_list(first3);
//	
//	first4=intersection_list(first1,first2);
//	hr();
//	printf("\nIntersection of linked list : ");
//	hr();
//	display_list(first4);
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
// Enter data 2 : 2
//
// Enter data 3 : 4
//
// Enter data 4 : 9
//
//__________________________________________________________________
//
//Enter no. of ele. for linked list 2 : 5
//
//__________________________________________________________________
//
// Enter data 1 :
//1
//
// Enter data 2 : 3
//
// Enter data 3 : 5
//
// Enter data 4 : 8
//
// Enter data 5 : 9
//
//__________________________________________________________________
//
//Union of linked list :
//__________________________________________________________________
//
//1
//2
//4
//9
//3
//5
//8
//__________________________________________________________________
//
//Intersection of linked list :
//__________________________________________________________________
//
//1
//3
//5
//*/