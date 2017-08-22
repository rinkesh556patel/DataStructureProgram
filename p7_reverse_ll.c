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
//struct node * reverse_list(struct node * first)
//{	
//	struct node *temp1=NULL,*temp2=first,*temp3;
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
//		temp3=first->next;
//		while(temp3!=NULL)
//		{
//			temp2->next=temp1;
//			temp1=temp2;
//			temp2=temp3;
//			temp3=temp3->next;
//		}
//		temp2->next=temp1;
//		first=temp2;
//		return first;
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
//			printf("  ->  %d",temp->data);
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
//	printf("Reverse Linked List : ");
//	hr();
//	first=reverse_list(first);
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
// Enter data 3 : 45
//
// Enter data 4 : 63
//
// Enter data 5 : 62
//
// Enter data 6 : 12
//
//__________________________________________________________________
//Reverse Linked List :
//__________________________________________________________________
//  ->  12  ->  62  ->  63  ->  45  ->  21  ->  32
//*/