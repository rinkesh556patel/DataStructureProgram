//#include<stdio.h>
//#include<conio.h>
//
//struct node
//{
//	int data;
//	struct node * next;
//};
//
//struct node * ins_inorder_node(struct node * first,struct node * newnode)
//{	
//	struct node *temp=first;
//	if(first==NULL)
//		first=newnode;
//	else if(first->data > newnode->data )
//	{
//		newnode->next=first;
//		first=newnode;
//	}
//	else if(first->next==NULL && first->data < newnode->data )
//	{
//		first->next=newnode;
//	}
//	else
//	{
//		while( temp->next!=NULL && temp->next->data < newnode->data )
//		{
//			temp=temp->next;
//		}
//		if(temp->next==NULL)
//		{
//			temp->next=newnode;
//		}
//		else 
//		{
//			newnode->next=temp->next;
//			temp->next=newnode;
//		}
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
//		first=ins_inorder_node(first,newnode);
//	}
//	
//	hr();
//	printf("Linked List : ");
//	hr();
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
// Enter data 1 : 32
//
// Enter data 2 : 21
//
// Enter data 3 : 24
//
// Enter data 4 : 23
//
// Enter data 5 : 2
//
// Enter data 6 : 62
//
//__________________________________________________________________
//Linked List :
//__________________________________________________________________
//
//2
//21
//23
//24
//32
//62
//*/