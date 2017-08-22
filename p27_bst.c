///*_____________________________________________________________________________
//Roll No. = 18
//Name     = Patel Rinkesh B.
//Class    = MCA-II
//Subject  = Data Structure
//Program  = Implementation of binary tree with display,search,delete node.
//________________________________________________________________________________*/
//#include<stdio.h>
//#include<conio.h>
//
//struct nodes{
//	int data;
//	struct nodes *left;
//	struct nodes *right;
//};
//struct stack
//{
//	struct nodes *tree_node;
//	struct stack *next;
//};
//void push(struct stack** first,struct nodes * newnode)
//{
//	struct stack *temp=(struct stack *) malloc(sizeof(struct stack));	
//	if(newnode == NULL)
//		return;
//	temp->tree_node=newnode;
//	temp->next=(*first);
//	(*first)=temp;
//}	
//int isEmpty(struct stack *top)
//{
//   return (top == NULL)? 1 : 0;
//}   
//struct nodes * pop(struct stack **first)
//{
//	  struct nodes *res;
//      struct stack *top;
//      if(isEmpty(*first))
//		 return;
//	  else
//	  {
//		 top = *first;
//		 res = top->tree_node;
//		 *first = top->next;
//		 free(top);
//		 return res;
//	  }
//}
//
//struct nodes * insert_tree(struct nodes *tree,struct nodes *newnode){
//	struct nodes *temp=tree;
//	if(tree==NULL){
//		tree=newnode;
//	}
//	else{
//		while(temp!=NULL){
//			if(temp->data > newnode->data){
//				if(temp->left==NULL){
//					temp->left=newnode;
//					return tree;
//				}
//				temp=temp->left;
//			}	
//			else{
//				if(temp->right==NULL){
//					temp->right=newnode;
//					return tree;
//				}
//				temp=temp->right;
//			}
//		}
//	}
//	return tree;
//}
//struct nodes * largest_bin_tree_node(struct nodes *tree){
//	struct nodes *temp=tree;
//	while(temp->right!=NULL)
//		temp=temp->right;
//	return temp;
//}
//struct nodes * smallest_bin_tree_node(struct nodes *tree){
//	struct nodes *temp=tree;
//	while(temp->left!=NULL)
//		temp=temp->left;
//	return temp;
//}
//struct nodes * delete_tree_node(struct nodes *tree,int del_data){
//	struct nodes *temp=tree,*temp2;
//	if(tree==NULL)
//		return tree;
//	else if(temp->data > del_data){
//		temp->left=delete_tree_node(temp->left,del_data);
//	}
//	else if(temp->data < del_data){
//		temp->right=delete_tree_node(temp->right,del_data);
//	}
//	else{
//		if(temp->left==NULL){
//			temp2=temp->right;
//			free(temp);
//			return temp2;
//		}
//		else if(temp->right==NULL){	
//			temp2=temp->left;
//			free(temp);
//			return temp2;
//		}
//		temp2=smallest_bin_tree_node(temp->right);
//		temp->data=temp2->data;
//		temp->right=delete_tree_node(temp->right,del_data);
//	}
//	return temp;
//}
//void disp_inorder(struct nodes * tree)
//{
//	struct nodes * current=tree,*temp;
//	struct stack *first=NULL;
//	int flag=1;
//	if(tree==NULL)
//	{
//		printf("\n___________________________________________________");
//		printf("\n!!! TREE IS EMPTY !!!");
//		return;
//	}
//	else 
//	{
//		printf("\n________________TREE INORDER_______________________\n");
//		while(flag)
//		{
//			if(current!=NULL)
//			{
//				push(&first,current);
//				current=current->left;				
//			}
//			else 
//			{
//				if(!isEmpty(first))
//				{
//					current=pop(&first);
//					printf("-> %d ",current->data);
//					current=current->right;
//				}
//				else
//					flag=0;
//			}
//		}
//	}	
//}
//
//struct nodes * search_bin_tree(int key,struct nodes *tree){
//	struct nodes *temp=tree;
//	if(tree==NULL){
//		printf("\n___________________________________________________");
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
//
//void main()
//{
//	struct nodes *tree=NULL,*newnode,*temp;
//	int choice=1,key,del_data;	
//	do{
//		printf("\n___________________________________________________");
//		printf("\n1.Insert node");
//		printf("\n2.Display tree");
//		printf("\n3.Search tree node");
//		printf("\n4.largest tree node");
//		printf("\n5.Delete tree node");
//		printf("\n6.Exit");
//		printf("\n___________________________________________________");
//		printf("\nEnter your choice : ");
//		scanf("%d",&choice);		
//		switch(choice){
//		case 1:
//			newnode=(struct nodes *)malloc(sizeof(struct nodes));
//			printf("\nEnter data : ");
//			scanf("%d",&newnode->data);
//			newnode->left=NULL;
//			newnode->right=NULL;
//			tree=insert_tree(tree,newnode);
//			break;
//		case 2:
//			disp_inorder(tree);
//			break;
//		case 3:
//			printf("\n___________________________________________________");
//			printf("\nEnter your choice : ");
//			scanf("%d",&key);			
//			tree=search_bin_tree(key,tree);
//			break;
//		case 4:
//			temp=largest_bin_tree_node(tree);
//			printf("\n___________________________________________________");
//			printf("\nMax element -> %d",temp->data);
//			break;
//		case 5:
//			printf("\n___________________________________________________");
//			printf("\nEnter key to delete : ");
//			scanf("%d",&del_data);			
//			tree=delete_tree_node(tree,del_data);
//			break;
//		case 6:
//			exit(0);
//		default:
//			printf("\n___________________________________________________");
//			printf("\n!!! INVALID CHOICE !!!");
//		}
//	}while(choice!=6);
//	getch();
//}
///**************************** OUTPUT *********************************
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 1
//
//Enter data : 10
//
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 1
//
//Enter data : 6
//
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 1
//
//Enter data : 8
//
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 1
//
//Enter data : 9
//
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 1
//
//Enter data : 20
//
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 2
//
//________________TREE INORDER_______________________
//-> 6 -> 8 -> 9 -> 10 -> 20
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 4
//
//___________________________________________________
//Max element -> 20
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 5
//
//___________________________________________________
//Enter key to delete : 8
//
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 5
//
//___________________________________________________
//Enter key to delete : 20
//
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 5
//
//___________________________________________________
//Enter key to delete : 10
//
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 2
//
//________________TREE INORDER_______________________
//-> 6 -> 9
//___________________________________________________
//1.Insert node
//2.Display tree
//3.Search tree node
//4.largest tree node
//5.Delete tree node
//6.Exit
//___________________________________________________
//Enter your choice : 6
//*********************************************************************/