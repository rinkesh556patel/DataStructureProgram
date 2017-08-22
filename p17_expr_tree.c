///*************************************************************************
//ROll No.= 18
//Name    = Patel Rinkeshkumar Bharatbhai
//Class   = MCA - II
//Subject = Data Structure
//program = Implementation of expression tree.
//**************************************************************************/
//#include<STDIO.H>
//#include<CONIO.H>
//typedef struct tree
//{
//char data;
//struct tree *left;
//struct tree *right;
//}*pos;
//
//pos stack[30];
//int top=-1;
//pos newnode(char b)
//{
//	pos temp;
//	temp=(struct tree*)malloc(sizeof(struct tree));
//	temp->data=b;
//	temp->left=NULL;
//	temp->right=NULL;
//	return(temp);
//}
//void push(pos temp)
//{
//	stack[++top]=temp;
//}
//pos pop()
//{
//	pos p;
//	p=stack[top--];
//	return(p);
//}
//void inorder(pos t)
//{
//	if(t!=NULL)
//	{
//		inorder(t->left);
//		printf("%c",t->data);
//		inorder(t->right);
//	}
//}
//void preorder(pos t)
//{
//	if(t!=NULL)
//	{
//		printf("%c",t->data);
//		preorder(t->left);
//		inorder(t->right);
//	}
//}
//void postorder(pos t)
//{
//	if(t!=NULL)
//	{
//		postorder(t->left);
//		postorder(t->right);
//		printf("%c",t->data);
//	}
//}
//void main()
//{
//	char a[20];
//	pos temp,t;
//	int j,i;
//	printf("\n___________________________________________________\n");
//	printf("\nEnter the postfix expression : ");
//	scanf("%s",a);
//	for(i=0;a[i]!=NULL;i++)
//	{
//		if(a[i]=='*' || a[i]=='/' || a[i]=='+' || a[i]=='-')
//		{
//			temp=newnode(a[i]);
//			temp->right=pop();
//			temp->left=pop();
//			push(temp);
//		}
//		else
//		{
//			temp=newnode(a[i]);
//			push(temp);
//		}
//	}
//	printf("\n______________________ INFIX ______________________\n\n");
//	inorder(temp);
//	printf("\n______________________ PREFIX _____________________\n\n");
//	preorder(temp);
//	printf("\n______________________ POSTFIX ____________________\n\n");
//	postorder(temp);
//	printf("\n___________________________________________________\n");
//	getch();
//}
///********************************* OUTPUT *********************************
//
//___________________________________________________
//
//Enter the postfix expression : abc*+de*f++
//
//______________________ INFIX ______________________
//
//a+b*c+d*e+f
//______________________ PREFIX _____________________
//
//++ab*cd*e+f
//______________________ POSTFIX ____________________
//
//abc*+de*f++
//___________________________________________________
//
//**************************************************************************/