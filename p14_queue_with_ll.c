//#include<stdio.h>
//#include<conio.h>
//
//struct node
//{
//	int data;
//	struct node * next;
//};
//void q_insert(struct node *(*rear),struct node *(*front),struct node *newnode)
//{
//	if(*front==NULL)
//	{
//		*rear=newnode;
//		*front=newnode;
//	}
//	else
//	{
//		(*rear)->next=newnode;
//		*rear=(*rear)->next;
//	}
//}
//void q_delete(struct node *(*front))
//{
//	struct node *temp=*front;
//	if(*front==NULL)
//	{
//		printf("\n!!! QUEUE is empty !!!");
//	}
//	else
//	{
//		*front=(*front)->next;
//		free(temp);
//		printf("\n!!! Delete Successfully !!!");
//	}
//}
//void q_display(struct node *front,struct node *rear)
//{
//	struct node *temp=front;
//	if(front==NULL)
//	{
//		printf("\n!!! QUEUE is empty !!!");
//	}
//	else
//	{
//		printf("\n QUEUE  ");
//		while(temp!=rear->next)
//		{		
//			printf(" <= %d",temp->data);
//			temp=temp->next;
//		}
//	}
//}
//void main()
//{
//	struct node *front=NULL,*rear=NULL,*newnode=NULL;
//	int choice,value;
//	do
//	{
//		printf("\n________________________________________________________\n\n1.Insert element");
//		printf("\n2.Delete elememt");
//		printf("\n3.Display elements");
//		printf("\n4.Exit");
//		printf("\n________________________________________________________\n\nEnter Your Choice : ");
//		scanf("%d",&choice);
//		switch(choice)
//		{
//		case 1:
//			newnode=(struct node *) malloc(sizeof(struct node ));
//			printf("\n Enter value : ");
//			scanf("%d",&newnode->data);
//			newnode->next=NULL;
//			q_insert(&rear,&front,newnode);
//			break;
//		case 2:
//			q_delete(&front);
//			break;
//		case 3:
//			q_display(front,rear);
//			break;
//		case 4:
//			exit(0);
//			break;
//		default:
//			printf("!!! INVALID CHOICE !!!");
//		}
//	}while(choice!=4);
//	getch();
//}
///*
//
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 1
//
// Enter value : 11
//
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 1
//
// Enter value : 12
//
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 1
//
// Enter value : 13
//
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 1
//
// Enter value : 14
//
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 3
//
// QUEUE   <= 11 <= 12 <= 13 <= 14
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 2
//
//!!! Delete Successfully !!!
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 2
//
//!!! Delete Successfully !!!
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 3
//
// QUEUE   <= 13 <= 14
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 2
//
//!!! Delete Successfully !!!
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 2
//
//!!! Delete Successfully !!!
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 2
//
//!!! QUEUE is empty !!!
//________________________________________________________
//
//1.Insert element
//2.Delete elememt
//3.Display elements
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 4
//*/