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
//struct node * sort_list(struct node * first)
//{	
//	int temp;
//	struct node *current=first,*ins_ptr=first;
//	if(first==NULL)
//	{
//		return first;
//	}
//	else if(first->next==NULL)
//	{
//		return first;
//	}
//	else
//	{
//		while(current!=NULL)
//		{
//			ins_ptr=first;
//			while(ins_ptr->next!=NULL)
//			{
//				if(current->data < ins_ptr->data)
//				{
//					temp=current->data;
//					current->data=ins_ptr->data;
//					ins_ptr->data=temp;
//				}
//				ins_ptr=ins_ptr->next;
//			}
//			current=current->next;
//		}
//	}
//
//	return first;	
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
//
//void hr()
//{
//	printf("\n__________________________________________________________________ \n");
//}
//void main()
//{
//	int size,i;
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
//	printf("Sorted Linked List : ");
//	hr();
//	first=sort_list(first);
//	display_list(first);
//	getch();
//}
///*
//
//__________________________________________________________________
//
//Enter no. of ele. for linked list : 6
//
//__________________________________________________________________
//
// Enter data 1 : 2
//
// Enter data 2 : 5
//
// Enter data 3 : 1
//
// Enter data 4 : 63
//
// Enter data 5 : 54
//
// Enter data 6 : 23
//
//__________________________________________________________________
//Sorted Linked List :
//__________________________________________________________________
//
//1
//2
//5
//23
//54
//63
//*/