//#include<stdio.h>
//#include<conio.h>
//struct table
//{
//	int known;
//	int distance;
//	int path;
//};
//struct graph
//{
//	int vertex;
//	struct graph * next;
//};
//void create_graph(struct graph *head[])
//{
//	int i,j,val,size;
//	struct graph *temp,*newnode;
//	for(i=0;i<5;i++)
//	{
//		head[i]=(struct graph *) malloc(sizeof(struct graph));
//		head[i]->next=NULL;
//		printf("\nEnter Vertex : ");
//		scanf("%d",&head[i]->vertex);
//		printf("\nEnter Total Reachable nodes : ");
//		scanf("%d",&size);
//		head[i]->T.distance=99;
//		head[i]->T.known=0;
//		head[i]->T.path=0;		
//		for(j=0;j<size;j++)
//		{
//			temp=head[i];
//			newnode=(struct graph *) malloc(sizeof(struct graph));
//			newnode->next=NULL;
//			printf("\nEnter reachable nodes : ");
//			scanf("%d",&newnode->vertex);
//			while(temp->next!=NULL)
//			{
//				temp=temp->next;
//			}
//			temp->next=newnode;			
//		}
//	}
//}
//void display_graph(struct graph *head[])
//{
//	struct graph *temp=head;
//	int i;
//	for(i=0;i<5;i++)
//	{
//		temp=head[i];
//		while(temp->next!=NULL)
//		{
//			printf(" -> %d",temp->vertex);
//			temp=temp->next;
//		}
//		printf(" -> %d ",temp->vertex);
//		printf("\n");
//	}
//}
//void unweighted_shorted_path(struct table *tbl,struct graph *head[])
//{
//	                                      
//}
//void main()
//{
//	struct graph *head[5],*temp,*newnode;
//	int i,size=5;
//	create_graph(head);
//	display_graph(head);
//	printf("\nAfter call ");
//
//	getch();
//}	