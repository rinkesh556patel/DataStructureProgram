//#include<stdio.h>
//#include<conio.h>
//
//struct circ_q
//{
//	int *q_arr,q_size,front,rear;
//};
//
//void hr(char c)
//{
//	int i;
//	printf("\n");
//	for(i=1;i<70;i++)
//		printf("%c",c);
//	printf("\n");
//}
//void q_insert(struct circ_q *Q,int val)
//{
//	if(Q->front==-1 && Q->rear==-1)
//	{
//		Q->front=0;
//		Q->q_arr[++Q->rear]=val;
//		return;
//	}
//	else if(Q->front==0 && Q->rear==Q->q_size-1 || Q->front==Q->rear + 1 )
//	{
//		hr('_');printf("!!! QUEUE IS FULL !!! ");return;
//	}
//	else if(Q->rear==Q->q_size-1 && Q->front!=0)
//	{
//		Q->rear=-1;
//	}
//	Q->q_arr[++Q->rear]=val;
//}
//void q_delete(struct circ_q *Q)
//{
//	if(Q->front==-1 && Q->rear==-1 )
//	{
//		hr('_');printf("!!! QUEUE IS EMPTY !!! ");return;
//	}
//	else if(Q->front==Q->rear)
// 	{
//		Q->front=Q->rear=-1;
//	}
//	else if(Q->front==Q->q_size-1)
//	{
//		Q->front=0;
//	}
//	else
//	{
//		Q->front++;
//	}
//}
//
//void q_display(struct circ_q *Q)
//{
//	int i;
//	if(Q->front==-1 && Q->rear==-1)
//	{
//		hr('_');printf("!!! QUEUE IS EMPTY !!! ");
//	}
//	else if(Q->front > Q->rear)
//	{
//		for(i=0;i<=Q->rear;i++)
//			printf("\n[%d]->%d",i,Q->q_arr[i]);
//		for(i=Q->front;i<=Q->q_size-1;i++)
//			printf("\n[%d]->%d",i,Q->q_arr[i]);		
//	}
//	else
//	{
//		for(i=Q->front;i<=Q->rear;i++)
//			printf("\n[%d]->%d",i,Q->q_arr[i]);
//	}
//}
//
//
//void main()
//{
//	struct circ_q *Q;
//	int choice,val;
//	Q=(struct circ_q *)malloc(sizeof(struct circ_q));
//	Q->front=-1;
//	Q->rear=-1;
//	printf("Enter Queue Size : ");
//	scanf("%d",&Q->q_size);
//	Q->q_arr=(int *)malloc(sizeof(int) * Q->q_size);
//
//	do
//	{
//		hr("=");printf("1.Insert Element");
//		printf("\n2.Delete Element");
//		printf("\n3.Display Queue");
//		printf("\n4.Exit");hr('=');
//		printf("Enter your choice : ");
//		scanf("%d",&choice);
//		switch(choice)
//		{
//		case 1:
//			hr('_');printf("Enter Data : ");
//			scanf("%d",&val);
//			q_insert(Q,val);
//			break;
//		case 2:
//			q_delete(Q);
//			break;
//		case 3:
//			q_display(Q);
//			break;
//		case 4:
//			exit();
//		default:
//			hr('_');printf("!!! INVALID CHOICE !!!");
//		}
//	}while(choice!=4);
//
//	getch();
//	
//}
///*Enter Queue Size : 4
//
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 1
//
//_____________________________________________________________________
//Enter Data : 1
//
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 1
//
//_____________________________________________________________________
//Enter Data : 2
//
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 1
//
//_____________________________________________________________________
//Enter Data : 3
//
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 1
//
//_____________________________________________________________________
//Enter Data : 4
//
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 3
//
//[0]->1
//[1]->2
//[2]->3
//[3]->4
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 2
//
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 2
//
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 3
//
//[2]->3
//[3]->4
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 1
//
//_____________________________________________________________________
//Enter Data : 4
//
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 1
//
//_____________________________________________________________________
//Enter Data : 5
//
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 1
//
//_____________________________________________________________________
//Enter Data : 6
//
//_____________________________________________________________________
//!!! QUEUE IS FULL !!!
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice : 3
//
//[0]->4
//[1]->5
//[2]->3
//[3]->4
//
//1.Insert Element
//2.Delete Element
//3.Display Queue
//4.Exit
//=====================================================================
//Enter your choice :
//*/