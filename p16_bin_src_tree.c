///*_____________________________________________________________________________
//Roll No. = 18
//Name     = Patel Rinkesh B.
//Class    = MCA-II
//Subject  = Data Structure
//Program  = 
//________________________________________________________________________________*/
//#include<stdio.h>
//#include<conio.h>
//struct nodes 
//{
//	int data;
//	struct nodes *left;
//	struct nodes *right;
//};
//void hr(char c)
//{
//	int i;
//	printf("\n");
//	for(i=1;i<70;i++)
//		printf("%c",c);
//	printf("\n");
//}
//struct nodes * smallest_bin_tree(struct nodes *tree)
//{
//	struct nodes *temp=tree;
//	while(temp->left!=NULL)
//		temp=temp->left;
//	return temp;
//}
//struct nodes * largest_bin_tree(struct nodes *tree)
//{
//	struct nodes *temp=tree;
//	while(temp->right!=NULL)
//		temp=temp->right;
//	return temp;
//}
//
//struct nodes * delete_tree(struct nodes *tree,int key)
//{
//	struct nodes *temp=tree,*temp2=NULL;
//	if(tree==NULL)
//	{		
//		printf("\n!!! Given Key not found !!!");
//		return tree;
//	}
//	else if(temp->data > key)
//	{
//		temp->left=delete_tree(temp->left,key);
//	}
//	else if(temp->data < key)
//	{
//		temp->right=delete_tree(temp->right,key);
//	}
//	else
//	{
//		if(temp->left && temp->right)
//		{
//			temp2=largest_bin_tree(temp->left);
//			temp->data=temp2->data;
//			temp->left=delete_tree(temp->left,temp2->data);
//		}
//		else
//		{
//			temp2=temp;
//			if(temp->left==NULL && temp->right==NULL)
//				temp=NULL;
//			else
//			{
//					if(temp->left==NULL)
//				temp=temp->right;
//			if(temp->right==NULL)
//				temp=temp->left;
//		
//			}
//			free(temp2);
//		}
//	}
//	return tree;
//}
//
//struct nodes * insert_tree(struct nodes *tree,struct nodes *newnode)
//{
//	struct nodes *temp=tree;
//	if(tree==NULL)
//	{
//		tree=newnode;
//	}
//	else
//	{
//		while(temp!=NULL)
//		{
//			if(temp->data > newnode->data)
//			{
//				if(temp->left==NULL)
//				{
//					temp->left=newnode;
//					return tree;
//				}
//				temp=temp->left;
//			}	
//			else 
//			{
//				if(temp->right==NULL)
//				{
//					temp->right=newnode;
//					return tree;
//				}
//				temp=temp->right;
//			}
//		}
//	}
//	return tree;
//}
//
//void inorder(struct nodes * tree)
//{
//	if(tree==NULL)
//		return;
//	else
//	{
//		inorder(tree->left);
//		printf(" -> %d ",tree->data);
//		inorder(tree->right);
//		printf(" ");
//	}
//}
//
//struct nodes * search_bin_tree(int key,struct nodes *tree)
//{
//	struct nodes *temp=tree;
//	if(tree==NULL)
//	{
//		printf("\n!!! KEY NOT FOUND !!!");
//		return tree;
//	}
//	else if(temp->data==key)
//		return temp;
//	else if(temp->data>key)
//		search_bin_tree(key,tree->left);
//	else
//		search_bin_tree(key,tree->right);
//}
//void main()
//{
//	struct nodes *tree=NULL,*newnode,*temp1;
//	int choice=1,key;	
//	do
//	{
//		hr('*'); printf("\n1.Insert node");
//		printf("\n2.Display tree");
//		printf("\n3.Search tree node");
//		printf("\n4.smallest tree node");
//		printf("\n5.Exit"); hr('*');
//		printf("\nEnter your choice : ");
//		scanf("%d",&choice); hr('*');		
//		switch(choice)
//		{
//		case 1:
//			newnode=(struct nodes *)malloc(sizeof(struct nodes));
//			printf("\nEnter data : ");
//			scanf("%d",&newnode->data);
//			newnode->left=NULL;
//			newnode->right=NULL;
//			tree=insert_tree(tree,newnode);
//			break;
//		case 2:
//			printf("\nINORDER TREE  ");
//			inorder(tree);
//			break;
//		case 3:
//			printf("\nEnter value to search : ");
//			scanf("%d",&key);			
//			temp1=search_bin_tree(key,tree);
//			printf("\n--->%d",temp1->data);
//			break;
//		case 4:
//			temp1=largest_bin_tree(tree);
//			printf("\nlargest value => %d",temp1->data);
//			break;
//		case 5:
//			printf("\nEnter value to DELETE : ");
//			scanf("%d",&key);
//			temp1=delete_tree(tree,key);
//			break;
//		case 6:
//			exit(0);
//		default:
//			printf("\n!!! INVALID CHOICE !!!");
//		}
//	}while(choice!=6);
//	getch();
//}
///*
//
//*********************************************************************
//
//1.Insert node
//2.Display tree
//3.Search tree node
//4.smallest tree node
//5.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//*********************************************************************
//
//Enter data : 10
//
//*********************************************************************
//
//1.Insert node
//2.Display tree
//3.Search tree node
//4.smallest tree node
//5.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//*********************************************************************
//
//Enter data : 6
//
//*********************************************************************
//
//1.Insert node
//2.Display tree
//3.Search tree node
//4.smallest tree node
//5.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//*********************************************************************
//
//Enter data : 8
//
//*********************************************************************
//
//1.Insert node
//2.Display tree
//3.Search tree node
//4.smallest tree node
//5.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//*********************************************************************
//
//Enter data : 9
//
//*********************************************************************
//
//1.Insert node
//2.Display tree
//3.Search tree node
//4.smallest tree node
//5.Exit
//*********************************************************************
//
//Enter your choice : 1
//
//*********************************************************************
//
//Enter data : 20
//
//*********************************************************************
//
//1.Insert node
//2.Display tree
//3.Search tree node
//4.smallest tree node
//5.Exit
//*********************************************************************
//
//Enter your choice : 2
//
//*********************************************************************
//
//INORDER TREE   -> 6  -> 8  -> 9     -> 10  -> 20
//*********************************************************************
//
//1.Insert node
//2.Display tree
//3.Search tree node
//4.smallest tree node
//5.Exit
//*********************************************************************
//
//Enter your choice : 4
//
//*********************************************************************
//
//Smallest value => 6
//*********************************************************************
//
//1.Insert node
//2.Display tree
//3.Search tree node
//4.smallest tree node
//5.Exit
//*********************************************************************
//
//Enter your choice : 5
//*/
//
//
//
//
//
