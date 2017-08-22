//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//struct stack
//{
//	int top;
//	char *arr;
//	int size;
//};
//struct stack * create_stack()
//{
//	struct stack *temp;
//	temp=(struct stack *)malloc(sizeof(struct stack ));
//	printf("\n________________________________________________\n");
//	printf("\nEnter Stack Size : ");
//	scanf("%d",&temp->size);
//	temp->arr=(char *)malloc(sizeof(char)*temp->size);
//	temp->top=-1;
//	return temp;
//}
//void push(struct stack *stk,char ch)
//{
//	if(stk->top==stk->size)
//	{
//		printf("Stack overflow");
//	}
//	else
//	{
//		stk->arr[++stk->top]=ch;
//	}
//}
//char pop(struct stack *stk)
//{
//	if(stk->top==-1)
//	{
//		printf("Stack underflow");
//	}
//	else
//	{
//		return stk->arr[stk->top--];
//	}
//}
//int priority(char c)
//{
//	if(c=='(')
//		return 0;
//	else if(c=='+' || c=='-')
//		return 1;
//	else if(c=='*' || c=='/')
//		return 2;
//}
//char * to_postfix(char *infix,struct stack *stk)
//{
//	char c,postfix[50],ch;
//	int i,cnt=0;
//	for(i=0;i<strlen(infix);i++)
//	{
//		c=infix[i];
//		if(c>=65 && c<=90 || c>=97 && c<=122)
//		{
//			postfix[cnt++]=c;
//		}
//		else if(c=='(')
//		{
//			push(stk,c);
//		}
//		else if(c=='+' || c=='-' || c=='*' || c=='/' )
//		{
//			if(priority(c) > priority(stk->arr[stk->top]))
//			{
//				push(stk,c);
//			}	
//			else
//			{
//				postfix[cnt++]=pop(stk);
//				push(stk,c);
//			}
//		}
//		else if(c==')')
//		{
//			do
//			{
//				ch=pop(stk);
//				if(ch!='(')
//					postfix[cnt++]=ch;
//			}while(ch != '(');
//		}
//	}
//	while(stk->top!=-1)
//	{
//		postfix[cnt++]=pop(stk);
//	}
//	postfix[cnt]='\0';
//	return postfix;
//}
//
//void main()
//{
//	char infix[50],postfixs[50];
//	struct stack *stk;
//	stk=create_stack();
//	printf("\n________________________________________________\n");
//	printf("Enter Infix Expression : ");
//	scanf("%s",infix);\
//	strcpy(postfixs,to_postfix(infix,stk));
//	printf("\n________________________________________________\n");
//	printf("Post fix Expression = %s ",postfixs);
//	printf("\n________________________________________________\n");
//
//	getch();
//}
///*
//
//________________________________________________
//
//Enter Stack Size : 50
//
//________________________________________________
//Enter Infix Expression : ((A+((B*C)/D))-E)
//
//________________________________________________
//Post fix Expression = ABC*D/+E-
//________________________________________________
//
//*/