//#include<stdio.h>
//#include<conio.h>
//
//struct stack
//{
//	int data;
//	struct stack * next;
//};
//
//struct stack * push(struct stack *first,struct stack * newnode)
//{
//	if(first==NULL)
//	{
//		first=newnode;
//		printf("\nElemement inserted successfuly");
//	}
//	else
//	{
//		newnode->next=first;
//		first=newnode;
//		printf("\nElemement inserted successfuly");
//		return first;
//	}
//		
//};
//struct stack * pop(struct stack *first)
//{
//	struct stack *temp;
//	if(first==NULL)
//		printf("\nStack underflow");
//	else
//	{
//		temp=first;
//		first=first->next;
//		free(temp);
//		printf("\nTop element deleted");
//	}
//	return first;
//}
//void disp_stack(struct stack *first)
//{
//	struct stack *temp=first;
//	if(first==NULL)
//	{
//		printf("\nStack underflow");
//	}
//	else
//	{
//		printf("\nStack :->\n");
//		while(temp->next!=NULL)
//		{
//			printf("\n%d",temp->data);			
//			temp=temp->next;
//		}
//	}	
//}
//
//void main()
//{
//	struct stack *first=NULL,*newnode=NULL;
//	int choice,value;
//	first=(struct stack *)malloc(sizeof(struct stack ));
//	first->next=NULL;
//	do
//	{
//		printf("\n________________________________________________________\n\n1.push");
//		printf("\n2.pop");
//		printf("\n3.display");
//		printf("\n4.Exit");
//		printf("\n________________________________________________________\n\nEnter Your Choice : ");
//		scanf("%d",&choice);
//		switch(choice)
//		{
//		case 1:
//			newnode=(struct stack *)malloc(sizeof(struct stack));
//			printf("\n Enter value : ");
//			scanf("%d",&value);
//			newnode->next=NULL;
//			newnode->data=value;
//			first=push(first,newnode);
//			break;
//		case 2:
//			first=pop(first);
//			break;
//		case 3:
//			disp_stack(first);
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
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 1
//
// Enter value : 11
//
//Elemement inserted successfuly
//________________________________________________________
//
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 1
//
// Enter value : 22
//
//Elemement inserted successfuly
//________________________________________________________
//
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 1
//
// Enter value : 33
//
//Elemement inserted successfuly
//________________________________________________________
//
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 1
//
// Enter value : 44
//
//Elemement inserted successfuly
//________________________________________________________
//
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 3
//
//Stack :->
//
//44
//33
//22
//11
//________________________________________________________
//
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 2
//
//Top element deleted
//________________________________________________________
//
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 2
//
//Top element deleted
//________________________________________________________
//
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 3
//
//Stack :->
//
//22
//11
//________________________________________________________
//
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice :
//*/