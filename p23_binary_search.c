///*************************************************************************
//ROll No.= 18
//Name    = Patel Rinkeshkumar Bharatbhai
//Class   = MCA - II
//Subject = Data Structure
//program = Perform search operation on array using binary search method.
//**************************************************************************/
//
//#include<stdio.h>
//#include<conio.h>
//int main()
//{	
//	int i,j,arr[10],arr_size=10,found=0,search,low,high,mid;
//	printf("Binary search :-\n===================================\n");
//	for(i=0;i<arr_size;i++)
//	{
//		printf("Enter array element :");
//		scanf("%d",&arr[i]);
//	}
//	printf("\n\n Enter search value :");
//	scanf("%d",&search);
//	low=0;
//	high=arr_size-1;
//
//	while(low<=high)
//	{
//		mid=(low+high)/2;
//		if(search==arr[mid])
//		{
//			printf("Search ele. found at arr[%d]",mid);
//			found++;
//			break;
//		}	
//		else if(search<arr[mid])
//		{
//			high=mid-1;
//		}
//		else
//		{
//			low=mid+1;
//		}
//	}
//	if(found==0)
//	{
//		printf("\n Search value not found");
//	}
//	getch();
//	return(0);
//}
///*********************************  OUTPUT  ******************************************
//Binary search :-
//===================================
//Enter array element :1
//Enter array element :2
//Enter array element :3
//Enter array element :4
//Enter array element :5
//Enter array element :6
//Enter array element :7
//Enter array element :8
//Enter array element :90
//Enter array element :100
//
//
// Enter search value :90
// 
// Search ele. found at arr[8]
//
//**************************************************************************************/