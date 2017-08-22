///*************************************************************************
//ROll No.= 18
//Name    = Patel Rinkeshkumar Bharatbhai
//Class   = MCA - II
//Subject = Data Structure
//program = DFS algorithm.
//**************************************************************************/
//#include<stdio.h>
//#include<conio.h>
//void hr(char c)
//{
//	int i;
//	printf("\n");
//	for(i=1;i<70;i++)
//		printf("%c",c);
//	printf("\n");
//}
//typedef struct graph{
//	int vertex;
//	struct graph * next;
//} graph;
//typedef struct node
//{
//	int data;
//	struct node * next;
//} node;
//void push(node *(*front),node *newnode){
//	if(*front==NULL){
//		*front=newnode;
//	}
//	else{
//		newnode->next=*front;
//		*front=newnode;
//	}
//}
//int pop(node *(*front)){
//	node *temp=*front;
//	int itemp;
//	if(*front!=NULL){
//		*front=(*front)->next;
//		itemp=temp->data;
//		free(temp);
//		return itemp;
//	}
//}
//int check_stack(node *front,int w){
//	node *temp=front;
//	if(front!=NULL){
//		while(temp!=NULL)	{		
//			if(temp->data==w)
//				return 0;
//			temp=temp->next;
//		}
//	}
//	return 1;
//}
//void create_graph(graph *head[],int tot_vertex){
//	int i,j,val,size;
//	graph *temp,*newnode;
//	for(i=0;i<tot_vertex;i++){
//		hr('*');
//		head[i]=(graph *) malloc(sizeof(graph));
//		head[i]->next=NULL;
//		printf("\nVertex -> V%d",i);
//		head[i]->vertex=i;
//		printf("\nEnter Total Reachable nodes : ");
//		scanf("%d",&size);
//		for(j=0;j<size;j++){
//			temp=head[i];
//			newnode=(graph *) malloc(sizeof(graph));
//			newnode->next=NULL;
//			printf("\nEnter reachable nodes %d : ",j+1);
//			scanf("%d",&newnode->vertex);
//			while(temp->next!=NULL){
//				temp=temp->next;
//			}
//			temp->next=newnode;			
//		}
//	}
//}
//
//void display_graph(graph *head[],int tot_vertex){
//	graph *temp;
//	int i;
//	for(i=0;i<tot_vertex;i++){
//		temp=head[i];
//		while(temp->next!=NULL){
//			printf(" -> %d",temp->vertex);
//			temp=temp->next;
//		}
//		printf(" -> %d ",temp->vertex);
//		printf("\n");
//	}
//}
//void DFS(graph *head[],int tot_vertex,int source){
//	int v,w,i,*status;
//	graph *temp=NULL;
//	node *front=NULL,*newnode=NULL;
//	status=(int *)malloc(sizeof(int)*tot_vertex);
//	for(i=0;i<tot_vertex;i++)
//		status[i]=1;
//	newnode=(node *) malloc(sizeof(node ));
//	newnode->data=source;
//	newnode->next=NULL;
//	push(&front,newnode);
//	status[source]=2;
//	while(front!=NULL){
//		if(front!=NULL)
//			printf("-> %d  ",front->data);
//		v=pop(&front);
//		temp=head[v];
//		status[v]=3;
//		while(temp!=NULL)
//		{
//			w=temp->vertex;
//			if(status[w]==1){
//				if(check_stack(front,w)){
//					newnode=(node *) malloc(sizeof(node ));
//					newnode->data=w;
//					newnode->next=NULL;
//					push(&front,newnode);
//					status[w]=2;
//				}
//			}
//			temp=temp->next;
//		}
//	}
//}
//void main(){
//	graph *head[7],*temp,*newnode;
//	int tot_vertex,source;	hr('*');
//	printf(">>>ENTER NO. OF VERTEX IN GRAPH : ");
//	scanf("%d",&tot_vertex);
//	create_graph(head,tot_vertex);
//	hr('_');
//	display_graph(head,tot_vertex);
//	hr('_');printf("Enter Source vertex:");
//	scanf("%d",&source);
//	hr('_');printf("\n DFS=>");
//	DFS(head,tot_vertex,source);
//	hr('_');	
//	getch();
//}
///*
//
//*********************************************************************
//>>>ENTER NO. OF VERTEX IN GRAPH : 4
//
//*********************************************************************
//
//Vertex -> V0
//Enter Total Reachable nodes : 2
//
//Enter reachable nodes 1 : 1
//
//Enter reachable nodes 2 : 2
//
//*********************************************************************
//
//Vertex -> V1
//Enter Total Reachable nodes : 2
//
//Enter reachable nodes 1 : 2
//
//Enter reachable nodes 2 : 3
//
//*********************************************************************
//
//Vertex -> V2
//Enter Total Reachable nodes : 1
//
//Enter reachable nodes 1 : 3
//
//*********************************************************************
//
//Vertex -> V3
//Enter Total Reachable nodes : 1
//
//Enter reachable nodes 1 : 0
//
//_____________________________________________________________________
// -> 0 -> 1 -> 2
// -> 1 -> 2 -> 3
// -> 2 -> 3
// -> 3 -> 0
//
//_____________________________________________________________________
//Enter Source vertex:0
//
//_____________________________________________________________________
//
// DFS=>-> 0  -> 2  -> 3  -> 1
//_____________________________________________________________________
//
//*/