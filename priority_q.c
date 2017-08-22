///*_____________________________________________________________________________
//Roll No. = 18
//Name     = Patel Rinkesh B.
//Class    = MCA-II
//Subject  = Data Structure
//Program  = Implementation of priority queue.
//________________________________________________________________________________*/
//#include<stdio.h>
//#include<conio.h>
//
//struct node
//{
//	int data,priority;
//	struct node * next;
//};
//
//struct node * q_insert(struct node * rear,struct node * newnode)
//{	
//	struct node *temp=rear;
//	if(rear==NULL)
//		rear=newnode;
//	else if(rear->priority < newnode->priority )
//	{
//		newnode->next=rear;
//		rear=newnode;
//	}
//	else if(rear->next==NULL && rear->priority > newnode->priority )
//	{
//		rear->next=newnode;
//	}
//	else
//	{
//		while( temp->next!=NULL && temp->next->priority >newnode->priority )
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
//	return rear;
//}
//
//struct node * delete_node(struct node * rear)
//{	
//	struct node *temp=rear;
//	if(rear==NULL)
//	{
//		printf("\n!!! Queue is empty !!!");
//		return rear;
//	}
//	else
//	{
//		temp=rear;
//		rear=rear->next;
//		free(temp);
//	}
//	return rear;
//}
//void display_queue(struct node * rear)
//{	
//	struct node * temp = rear;
//	if(temp==NULL)
//		printf("\n!!! Queue is empty !!!");
//	else
//	{
//		printf("\nQUEUE => \n===============\nfront");
//		while(temp!=NULL)
//		{
//			printf("<- %d ",temp->data);
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
//	int size,i,choice;
//	struct node *rear=NULL,*newnode=NULL; 
//	do
//	{
//		printf("\n___________________________________________________");
//		printf("\n1.add element");
//		printf("\n2.display queue");
//		printf("\n3.delete element");
//		printf("\n4.Exit");
//		printf("\n___________________________________________________");
//		printf("\nEnter your choice : ");
//		scanf("%d",&choice);
//		switch(choice)
//		{
//		case 1:
//			newnode=(struct node *) malloc(sizeof(struct node));
//			printf("\n Enter data      : ");
//			scanf("%d",&newnode->data);
//			printf("\n Enter priority  : ");
//			scanf("%d",&newnode->priority);
//			newnode->next=NULL;
//			rear=q_insert(rear,newnode);
//			break;
//		case 2:
//			display_queue(rear);
//			break;
//		case 3:
//			rear=delete_node(rear);
//			break;
//		case 4:
//			exit(0);
//		default:
//			printf("\n___________________________________________________");
//			printf("\n!!! INVALID CHOICE !!!");
//		}
//	}while(choice!=4);
//	getch();
//}
///*_________________________ OUTPUT __________________________________________
//
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 1
//
// Enter data      : 44
//
// Enter priority  : 4
//
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 1
//
// Enter data      : 22
//
// Enter priority  : 2
//
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 1
//
// Enter data      : 33
//
// Enter priority  : 3
//
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 1
//
// Enter data      : 11
//
// Enter priority  : 1
//
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 2
//
//QUEUE =>
//===============
//front<- 44 <- 33 <- 22 <- 11
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 3
//
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 3
//
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 1
//
// Enter data      : 99
//
// Enter priority  : 9
//
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 2
//
//QUEUE =>
//===============
//front<- 99 <- 22 <- 11
//___________________________________________________
//1.add element
//2.display queue
//3.delete element
//4.Exit
//___________________________________________________
//Enter your choice : 4
//_____________________________________________________________________________*/