///*************************************************************************
//ROll No.= 18
//Name    = Patel Rinkeshkumar Bharatbhai
//Class   = MCA - II
//Subject = Data Structure
//program = Sort an array using radix sort method.
//**************************************************************************/
//#include<STDIO.H>>
//#include<conio.h>
//
//struct radix
//{
//	int data;
//	struct radix *next;
//};
//void create_bucket(struct radix *bucket[])
//{
//	int i;
//	for(i=0;i<10;i++)
//	{
//		bucket[i]=(struct radix *)malloc(sizeof(struct radix ));
//		bucket[i]->next=NULL;
//		bucket[i]->data=i;
//	}
//}
//void free_bucket(struct radix *bucket[])
//{
//	int i;
//	for(i=0;i<10;i++)
//	{
//		bucket[i]->next=NULL;
//		bucket[i]->data=i;
//	}
//}
//
//struct radix * add_node(struct radix *head,struct radix *newnode)
//{
//	struct radix *temp=head;
//	if(head==NULL)
//	{
//		head=newnode;
//	}
//	else
//	{
//		while(temp->next!=NULL)
//		{
//			temp=temp->next;
//		}
//		temp->next=newnode;
//	}
//	return head;
//}
//void disp_list(struct radix *head)
//{
//	struct radix *temp=head;
//	if(head==NULL)
//	{
//		printf("\n!!! LIST IS EMPTY !!!");
//	}
//	else
//	{
//		while(temp!=NULL)
//		{
//			printf("\n %d",temp->data);
//			temp=temp->next;
//		}
//	}
//}
//int max_length(struct radix * head)
//{
//	struct radix * temp=head;
//	int cnt=0, max=temp->data;
//	while(temp!=NULL)
//	{
//		if(max < temp->data)
//			max=temp->data;
//		temp=temp->next;
//	}
//	
//	while(max!=0)
//	{
//		max=max/10;
//		cnt++;
//	}
//	return cnt;
//}
//struct radix * radix_sort(struct radix * head,struct radix *bucket[])
//{
//	int i,j,length,digit,base=10,div=1;
//	struct radix *temp=head,*temp2,*newnode;	
//	length=max_length(head);	
//	for(i=0;i<length;i++)
//	{
//		temp=head;				
//		while(temp!=NULL)
//		{	
//			digit=temp->data;
//			digit=digit%base;
//			digit=digit/div;
//			newnode=(struct radix *)malloc(sizeof(struct radix ));
//			newnode->next=NULL;
//			newnode->data=temp->data;			
//			temp2=bucket[digit];
//			while(temp2->next!=NULL){
//				temp2=temp2->next;
//			}
//			temp2->next=newnode;
//			temp=temp->next;	
//		}
//		head=NULL;	
//		for(j=0;j<10;j++)
//		{
//			if(bucket[j]->next!=NULL)
//			{
//				if(head==NULL){	
//					head=bucket[j]->next;
//					temp=head;
//				}						
//				else
//				{
//					while(temp->next!=NULL)
//					{
//						temp=temp->next;
//					}
//					temp->next=bucket[j]->next;
//				}
//			}					
//		}
//		base=base*10;
//		div=div*10;
//		if(i!=length-1)
//			free_bucket(bucket);
//	}
//	return head;
//}
//void main()
//{
//	int i,size;
//	struct radix *head=NULL,*newnode,*bucket[10];
//	create_bucket(bucket);
//	printf("\n______________________________________________ \n");
//	printf("\nEnter size of Array : ");
//	scanf("%d",&size);
//	printf("\n______________________________________________ \n");
//	for(i=0;i<size;i++) 
//	{
//		newnode=(struct radix *)malloc(sizeof(struct radix));
//		newnode->next=NULL;
//		printf("\nEnter value for arr[%d] -> ",i+1);
//		scanf("%d",&newnode->data);
//		head=add_node(head,newnode);
//	}
//	printf("\n______________________________________________ \n");
//	
//	head=radix_sort(head,bucket);
//	printf("\nAfter Sort Array : ");
//	printf("\n______________________________________________ \n");
//	disp_list(head);
//	getch();
//}
///******************************** OUTPUT ******************************************
//
//______________________________________________
//
//Enter size of Array : 8
//
//______________________________________________
//
//Enter value for arr[1] -> 123
//
//Enter value for arr[2] -> 54
//
//Enter value for arr[3] -> 62354
//
//Enter value for arr[4] -> 223
//
//Enter value for arr[5] -> 54
//
//Enter value for arr[6] -> 26
//
//Enter value for arr[7] -> 25
//
//Enter value for arr[8] -> 12
//
//______________________________________________
//
//After Sort Array :
//______________________________________________
//
// 12
// 25
// 26
// 54
// 54
// 123
// 223
// 62354
//**************************************************************************/