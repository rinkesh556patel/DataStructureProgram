//#include<stdio.h>
//#include<conio.h>
//
//void hr(char c)
//{
//	int i;
//	printf("\n");
//	for(i=1;i<70;i++)
//		printf("%c",c);
//	printf("\n");
//}
//
//struct doubly_list
//{
//	int data;
//	struct doubly_list *next;
//	struct doubly_list *prev;
//};
//
//struct doubly_list * ins_inorder_node(struct doubly_list * first,struct doubly_list * newnode)
//{
//	struct doubly_list *temp=first;
//	if(first==NULL)
//	{
//		first=newnode;
//		return first;
//	}
//	else if(first->data > newnode->data )
//	{
//		newnode->next=first;
//		first->prev=newnode;
//		newnode->prev=NULL;
//		first=newnode;
//	}
//	else
//	{
//		while(temp->next!=NULL && temp->next->data < newnode->data )
//		{
//			temp=temp->next;
//		}
//		if(temp->next==NULL	)
//		{
//			newnode->prev=temp;
//			temp->next=newnode;
//			newnode->next=NULL;
//			return first;
//		}
//		else if(temp->next->data >= newnode->data)
//		{
//			newnode->next=temp->next;
//			newnode->prev=temp;
//			temp->next=newnode;
//			newnode->next->prev=newnode;
//		}
//	}
//	return first;
//}
//struct doubly_list * delete_begin_node(struct doubly_list * first)
//{
//	struct doubly_list *temp=first;
//	if(first==NULL)
//	{
//		printf("\n!!! LIST IS EMPTY !!!");
//		return first;
//	}
//	else if(first->next==NULL)
//	{
//		temp=first;
//		first=NULL;
//		free(temp);
//	}
//	else
//	{
//		temp=first;
//		first=first->next;
//		first->prev=NULL;
//	}
//	return first;
//}
//struct doubly_list * delete_last_node(struct doubly_list * first)
//{
//	struct doubly_list *temp1=first,*temp2;
//	if(first==NULL)
//	{
//		printf("\n!!! LIST IS EMPTY !!!");
//		return first;
//	}
//	else if(first->next==NULL)
//	{
//		temp1=first;
//		first=NULL;
//		free(temp1);
//	}
//	else
//	{
//		while(temp1->next->next!=NULL)
//		{
//			temp1=temp1->next;
//		}
//		temp2=temp1->next;
//		temp1->next=NULL;
//		free(temp2);
//	}
//	return first;
//}
//struct doubly_list * delete_middle_node(struct doubly_list * first,int val)
//{
//	struct doubly_list *temp1=first,*temp2=NULL;
//	if(temp1==NULL)
//	{
//		hr('_'); printf("!!! LIST IS EMPTY !!!"); hr('_');
//	}
//	else if(temp1->data==val && temp1->next!=NULL)
//	{
//		temp2=first;
//		first=first->next;
//		first->prev=NULL;
//		free(temp2);
//	}
//	else if(temp1->data==val && temp1->next==NULL)
//	{
//		temp2=first;
//		first=NULL;
//		free(temp2);
//	}
//	else
//	{	
//		while(temp1->next!=NULL && temp1->next->data!=val)
//		{
//			temp1=temp1->next;
//		}
//		if(temp1->next==NULL)
//		{
//			hr('_'); printf("!!! GIVEN VALUE NOT FOUND !!!"); hr('_');
//		}
//		else 
//		{
//			temp2=temp1->next; 
//			temp1->next=temp1->next->next;
//			temp2->next->prev=temp1;
//			free(temp2);
//		}
//	}
//	return first;
//}
//
//void display_list(struct doubly_list *first)
//{
//	struct doubly_list *temp=first;
//	if(first==NULL)
//	{		
//		printf("\n!!! LIST IS EMPTY !!!"); 
//	}
//	else
//	{
//		while(temp!=NULL)
//		{
//			printf(" -> %d",temp->data);
//			temp=temp->next;
//		}
//	}
//}
//void display_listend(struct doubly_list *first)
//{
//	struct doubly_list *temp=first;
//	if(first==NULL)
//	{		
//		printf("\n!!! LIST IS EMPTY !!!"); 
//	}
//	else
//	{
//		while(temp->next!=NULL)
//		{
//			temp=temp->next;
//		}
//		while(temp->prev!=NULL)
//		{
//			temp=temp->prev;
//			printf("\n%d",temp->data);
//		}
//	}
//}
//
//void main()
//{
//	struct doubly_list *first=NULL,*first2=NULL,*newnode=NULL;
//	int size,i,choice=1,val=0;
//	do
//	{
//		printf("\n\n");hr('*'); printf("\n1.Insert element ");
//		printf("\n2.Display list ");
//		printf("\n3.delete from begining");
//		printf("\n4.delete from last");
//		printf("\n5.delete from middle");
//		printf("\n6.Exit");
//		hr('*'); printf("\nEnter your choice : ");
//		scanf("%d",&choice);
//		switch(choice)
//		{
//		case 1:
//			newnode=(struct doubly_list *) malloc(sizeof(struct doubly_list));
//			printf("\nEnter data : "); 
//			scanf("%d",&newnode->data);
//			newnode->next=NULL;
//			newnode->prev=NULL;
//			first=ins_inorder_node(first,newnode);
//			break;
//		case 2:
//			hr('_'); printf("\nLinked List: ");hr('_');
//			display_list(first);
//			break;
//		case 3:
//			first=delete_begin_node(first);
//			break;
//		case 4:
//			first=delete_last_node(first);
//			break;
//		case 5:
//			printf("\nEnter data value to delete : ");
//			scanf("%d",&val);
//			first=delete_middle_node(first,val);
//			break;
//		case 6:
//			exit(0);
//		default:
//			printf("\n!!! INVALID CHOICE !!!");
//		}
//	}while(choice!=6);
//
//	getch();
//}
///*
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//Enter data : 11
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//Enter data : 12
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//Enter data : 13
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//Enter data : 14
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 2
//
//_____________________________________________________________________
//
//Linked List:
//_____________________________________________________________________
// -> 11 -> 12 -> 13 -> 14
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 3
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 4
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 2
//
//_____________________________________________________________________
//
//Linked List:
//_____________________________________________________________________
// -> 12 -> 13
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//Enter data : 16
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//Enter data : 17
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 2
//
//_____________________________________________________________________
//
//Linked List:
//_____________________________________________________________________
// -> 12 -> 13 -> 16 -> 17
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 5
//
//Enter data value to delete : 16
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 2
//
//_____________________________________________________________________
//
//Linked List:
//_____________________________________________________________________
// -> 12 -> 13 -> 17
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 5
//
//Enter data value to delete : 12
//
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice : 2
//
//_____________________________________________________________________
//
//Linked List:
//_____________________________________________________________________
// -> 13 -> 17
//
//
//*********************************************************************
//
//1.Insert element
//2.Display list
//3.delete from begining
//4.delete from last
//5.delete from middle
//6.Exit
//*********************************************************************
//
//Enter your choice :
//*/