///*************************************************************************
//ROll No.= 18
//Name    = Patel Rinkeshkumar Bharatbhai
//Class   = MCA - II
//Subject = Data Structure
//program = Dijkstra's algorithm to find shortest path of weighted graph.
//**************************************************************************/
//#include<stdio.h>
//#include<conio.h>
//void hr(char c){
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
//
//typedef struct node{
//	int data;
//	struct node * next;
//} node;
//void enqueue(node *(*rear),node *(*front),node *newnode){
//	if(*front==NULL){
//		*rear=newnode;
//		*front=newnode;
//	}
//	else{
//		(*rear)->next=newnode;
//		*rear=(*rear)->next;
//	}
//}
//int dequeue(node *(*front),node *(*rear)){
//	node *temp=*front;
//	int itemp;
//	if(*front==NULL){
//		
//	}
//	else if(*front==*rear){
//		*rear=*front=NULL;
//		itemp=temp->data;
//		free(temp);
//		return itemp;
//	}
//	else{
//		*front=(*front)->next;
//		itemp=temp->data;
//		free(temp);
//		return itemp;
//	}
//}
//void q_display(node *front,node *rear){
//	node *temp=front;
//	if(front==NULL){
//		printf("empty \n");
//	}
//	else{
//		while(temp!=rear->next)	{		
//			printf("  %d",temp->data);
//			temp=temp->next;
//		}
//		printf("\n\n");
//	}
//}
//int check_queue(node *front,node *rear,int w){
//	node *temp=front;
//	if(front!=NULL){
//		while(temp!=rear->next)	{		
//			if(temp->data==w)
//				return 0;
//			temp=temp->next;
//		}
//	}
//	return 1;
//}
//typedef struct table{
//	int known;
//	int distance;
//	int path;
//} table;
//
//void init_table(table *tbl,int tot_node){
//	int i;
//	for(i=0;i<tot_node;i++){
//		tbl[i].known=0;
//		tbl[i].path=0;
//		tbl[i].distance=32767;
//	}
//}
//
//void disp_table(table tbl[],int tot_node){
//	int i;
//	hr('_');
//	for(i=0;i<tot_node;i++){
//		printf("v%d|%3d | %5d | v%d|\n",i,tbl[i].known,tbl[i].distance,tbl[i].path);
//	}
//	printf("\n");
//}
//void create_graph(graph *head[],int tot_node){
//	int i,j,val,size;
//	graph *temp,*newnode;
//	for(i=0;i<tot_node;i++){
//		hr('_');
//		head[i]=(graph *) malloc(sizeof(graph));
//		head[i]->next=NULL;
//		printf("\nVertex : %d",i);
//		head[i]->vertex=i;
//		printf("\nEnter Total Reachable nodes : ");
//		scanf("%d",&size);
//		for(j=0;j<size;j++){
//			temp=head[i];
//			newnode=(graph *) malloc(sizeof(graph));
//			newnode->next=NULL;
//			printf("\nEnter reachable nodes : ");
//			scanf("%d",&newnode->vertex);
//			while(temp->next!=NULL){
//				temp=temp->next;
//			}
//			temp->next=newnode;			
//		}
//	}
//}
//
//void display_graph(graph *head[],int tot_node){
//	graph *temp;
//	int i;
//	for(i=0;i<tot_node;i++){
//		temp=head[i];
//		while(temp->next!=NULL){
//			printf(" -> %d",temp->vertex);
//			temp=temp->next;
//		}
//		printf(" -> %d ",temp->vertex);
//		printf("\n");
//	}
//}
//void unweighted_shorted_path(table tbl[],graph *head[],int tot_node,int source){
//	int v,w,i;
//	graph *temp=NULL;
//	node *front=NULL,*rear=NULL,*newnode=NULL;
//	newnode=(node *) malloc(sizeof(node ));
//	newnode->data=source;
//	newnode->next=NULL;
//	enqueue(&rear,&front,newnode);
//	tbl[source].distance=0;
//	while(front!=NULL){
//		v=dequeue(&front,&rear);
//		temp=head[v];
//		tbl[v].known=1;
//		while(temp!=NULL)
//		{
//			w=temp->vertex;
//			if(tbl[w].distance==32767){
//				tbl[w].distance=tbl[v].distance+1;
//				tbl[w].path=v;
//				if(check_queue(front,rear,w)){
//					newnode=(node *) malloc(sizeof(node ));
//					newnode->data=w;
//					newnode->next=NULL;
//					enqueue(&rear,&front,newnode);
//				}
//			}
//			temp=temp->next;
//		}
//	}
//}
//
//void disp_shorted_path(table tbl[],int tot_node,int source){
//	int i,dest,destination;
//	while(1){
//		printf("Enter destination vertex:");
//		scanf("%d",&destination);
//		dest=destination;
//		if(destination<tot_node){
//			while(dest!=source){
//				printf(" %d <= ",dest);
//				dest=tbl[dest].path;
//			}
//			printf("%d",source);
//			return;
//		}
//		else{
//			printf("\n!!! INVALID VERTEX !!!\n");
//		}
//	}
//}
//void main(){
//	graph *head[5],*temp,*newnode;
//	int i,tot_node,source;
//	table *tbl=NULL;
//	printf("Enter Number of vertex:");
//	scanf("%d",&tot_node);
//	tbl=(table *)malloc(sizeof(table)*tot_node);
//	init_table(tbl,tot_node);
//	create_graph(head,tot_node);
//	display_graph(head,tot_node);
//	printf("Enter Source vertex:");
//	scanf("%d",&source);
//	unweighted_shorted_path(tbl,head,tot_node,source);
//	hr('_');
//	printf("Finale Table\n");
//	disp_table(tbl,tot_node);
//	hr('_');
//	disp_shorted_path(tbl,tot_node,source);
//	getch();
//}
///*
//Enter Number of vertex:4
//
//_____________________________________________________________________
//
//Vertex : 0
//Enter Total Reachable nodes : 2
//
//Enter reachable nodes : 1
//
//Enter reachable nodes : 2
//
//_____________________________________________________________________
//
//Vertex : 1
//Enter Total Reachable nodes : 2
//
//Enter reachable nodes : 2
//
//Enter reachable nodes : 3
//
//_____________________________________________________________________
//
//Vertex : 2
//Enter Total Reachable nodes : 1
//
//Enter reachable nodes : 3
//
//_____________________________________________________________________
//
//Vertex : 3
//Enter Total Reachable nodes : 1
//
//Enter reachable nodes : 0
// -> 0 -> 1 -> 2
// -> 1 -> 2 -> 3
// -> 2 -> 3
// -> 3 -> 0
//Enter Source vertex:0
//
//_____________________________________________________________________
//Finale Table
//
//_____________________________________________________________________
//v0|  1 |     0 | v0|
//v1|  1 |     1 | v0|
//v2|  1 |     1 | v0|
//v3|  1 |     2 | v1|
//
//
//_____________________________________________________________________
//Enter destination vertex:3
// 3 <=  1 <= 0
//*/