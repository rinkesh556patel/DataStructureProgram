//#include<stdio.h>
//#include<conio.h>
//
//struct linked_list 
//{
//	int data;
//	struct linked_list *next;
//};
//struct linked_list * add_node(struct linked_list *newnode,struct linked_list *first);
//void disp_node(struct linked_list *first);
//int count_list(struct linked_list *first);
//struct linked_list * search_node(struct linked_list *first);
//struct linked_list * search_prev_node(struct linked_list *first);
//void main()
//{
//	int choice;
//	struct linked_list *first=NULL,*newnode=NULL,*temp; 
//	do
//	{
//		printf("\n___________________________________________________");
//		printf("\n1.add node");
//		printf("\n2.display list");
//		printf("\n3.count nodes");
//		printf("\n4.search node address");
//		printf("\n5.search previous node address");
//		printf("\n6.Exit");
//		printf("\n___________________________________________________");
//		printf("\nEnter your choice : ");
//		scanf("%d",&choice);
//		switch(choice)
//		{
//		case 1:
//			newnode=(struct linked_list *) malloc(sizeof(struct linked_list));
//			printf("\nEnter value for data : ");
//			scanf("%d",&newnode->data);
//			newnode->next=NULL;
//			first=add_node(newnode,first);
//			break;
//		case 2:
//			disp_node(first);
//			break;
//		case 3:
//			printf("\nTotal nodes are : %d ",count_list(first));
//			break;
//		case 4:
//			temp=search_node(first);
//			break;
//		case 5:
//			temp=search_prev_node(first);
//			break;
//		case 6:
//			exit(0);
//		default:
//			printf("\n___________________________________________________");
//			printf("\n!!! INVALID CHOICE !!!");
//		}
//	}while(choice!=6);
//	getch();
//}
//
//struct linked_list * add_node(struct linked_list *newnode,struct linked_list *first)
//{
//	struct linked_list *temp=first;
//	if(first==NULL)
//	{
//		first=newnode;
//		first->next=first;
//	}
//	else if(first->next==first)
//	{
//		first->next=newnode;
//		newnode->next=first;
//	}
//	else
//	{
//		temp=first;
//		while(temp->next!=first)
//		{
//			temp=temp->next;
//		}
//		temp->next=newnode;
//		newnode->next=first;
//	}
//	return first;
//}
//void disp_node(struct linked_list *first)
//{
//	struct linked_list *temp=first;
//	printf("\n___________________DATA____________________________");
//	while(temp->next!=first)
//	{
//		printf("\n %d",temp->data);
//		temp=temp->next;
//	}
//	printf("\n %d",temp->data);
//}
//int count_list(struct linked_list *first)
//{
//	int count=1;
//	struct linked_list *temp=first;
//	if(first==NULL)
//		return 0;
//	else
//	{
//		while(temp->next!=first)
//		{
//			count++;
//			temp=temp->next;
//		}
//		return count;
//	}	
//}
//
//struct linked_list * search_node(struct linked_list *first)
//{	
//	struct linked_list *temp=first;
//	int search_value;
//	printf("Enter value to search address : ");
//	scanf("%d",&search_value);
//	if(first==NULL)
//		return 0;
//	else
//	{
//		while(temp->next!=first)
//		{
//			if(search_value==temp->data)
//			{
//				return temp->next;
//			} 
//			temp=temp->next;
//		}
//		if(search_value==temp->data)
//		{
//			return temp->next;
//		}
//	return 0;
//	}	
//}
//
//struct linked_list * search_prev_node(struct linked_list *first)
//{	
//	struct linked_list *temp=first;
//	int search_value;
//	printf("\nEnter value to search previous address : ");
//	scanf("%d",&search_value);
//	if(first==NULL)
//		return 0;
//	else
//	{
//		while(temp->next!=first)
//		{
//			if(search_value==temp->next->data)
//			{
//				return temp->next;
//			}
//			temp=temp->next;
//		}
//		if(search_value==temp->next->data)
//		{
//			return temp->next;
//		}
//		return 0;
//	}
//}
///*
//___________________________________________________
//1.add node
//2.display list
//3.count nodes
//4.search node address
//5.search previous node address
//6.Exit
//___________________________________________________
//Enter your choice : 1
//
//Enter value for data : 11
//
//___________________________________________________
//1.add node
//2.display list
//3.count nodes
//4.search node address
//5.search previous node address
//6.Exit
//___________________________________________________
//Enter your choice : 1
//
//Enter value for data : 12
//
//___________________________________________________
//1.add node
//2.display list
//3.count nodes
//4.search node address
//5.search previous node address
//6.Exit
//___________________________________________________
//Enter your choice : 13
//
//___________________________________________________
//!!! INVALID CHOICE !!!
//___________________________________________________
//1.add node
//2.display list
//3.count nodes
//4.search node address
//5.search previous node address
//6.Exit
//___________________________________________________
//Enter your choice : 1
//
//Enter value for data : 13
//
//___________________________________________________
//1.add node
//2.display list
//3.count nodes
//4.search node address
//5.search previous node address
//6.Exit
//___________________________________________________
//Enter your choice : 1
//
//Enter value for data : 14
//
//___________________________________________________
//1.add node
//2.display list
//3.count nodes
//4.search node address
//5.search previous node address
//6.Exit
//___________________________________________________
//Enter your choice : 2
//
//___________________DATA____________________________
// 11
// 12
// 13
// 14
//___________________________________________________
//1.add node
//2.display list
//3.count nodes
//4.search node address
//5.search previous node address
//6.Exit
//___________________________________________________
//Enter your choice : 3
//
//Total nodes are : 4
//___________________________________________________
//1.add node
//2.display list
//3.count nodes
//4.search node address
//5.search previous node address
//6.Exit
//___________________________________________________
//Enter your choice :
//*/