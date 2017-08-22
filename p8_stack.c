//#include<stdio.h>
//#include<conio.h>
//
//struct stack
//{
//	int top;
//	int size;
//	int *arr;
//};
//struct stack * create_stack(int sz)
//{
//	struct stack *stk;
//	stk=malloc(sizeof(struct stack ));
//	stk->top=-1;
//	stk->size=sz;
//	stk->arr=malloc((sizeof(int )* stk->size));
//	return stk;
//}
//int isfull(struct stack *stk)
//{
//	if(stk->top >= stk->size-1)
//		return 1;
//	else 
//		return 0;
//}
//int isempty(struct stack *stk)
//{
//	if(stk->top<0)
//		return 1;
//	else 
//		return 0;
//}
//
//void push(struct stack *stk,int value)
//{
//	if(!isfull(stk))
//	{
//		stk->top++;
//		stk->arr[stk->top]=value;
//		printf("\nElement Inserted Successfull");
//	}
//	else
//	{
//		printf("\n!!! STACK OVERFLOW !!!");
//	}
//}
//void pop(struct stack *stk)
//{
//	if(!isempty(stk))
//	{
//		stk->top--;
//		printf("\nElement Deleted Successfull");
//	}
//	else
//	{
//		printf("\n!!! STACK UNDERFLOW !!!");
//	}
//}
//void disp_stack(struct stack *stk)
//{
//	int i;
//	printf("\n Stack Elements :\n________________________________________________________\n");
//	for(i=0;i<=stk->top;i++)
//	{
//		printf("\n%d",stk->arr[i]);
//	}
//}
//
//void main()
//{
//	struct stack *s1;
//	int choice,value,n;
//	printf("\nEnter Stack Size : ");
//	scanf("%d",&n);
//	s1=create_stack(n);
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
//			printf("\n Enter value : ");
//			scanf("%d",&value);
//			push(s1,value);
//			break;
//		case 2:
//			pop(s1);
//			break;
//		case 3:
//			disp_stack(s1);
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
//Enter Stack Size : 4
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
// Enter value : 10
//
//Element Inserted Successfull
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
// Enter value : 20
//
//Element Inserted Successfull
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
// Enter value : 30
//
//Element Inserted Successfull
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
// Enter value : 40
//
//Element Inserted Successfull
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
// Enter value : 50
//
//!!! STACK OVERFLOW !!!
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
// Stack Elements :
//________________________________________________________
//
//10
//20
//30
//40
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
//Element Deleted Successfull
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
//Element Deleted Successfull
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
//Element Deleted Successfull
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
//Element Deleted Successfull
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
//!!! STACK UNDERFLOW !!!
//________________________________________________________
//
//1.push
//2.pop
//3.display
//4.Exit
//________________________________________________________
//
//Enter Your Choice : 4
//*/