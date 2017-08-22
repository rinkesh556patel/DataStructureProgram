///*************************************************************************
//ROll No.= 18
//Name    = Patel Rinkeshkumar Bharatbhai
//Class   = MCA - II
//Subject = Data Structure
//program = Sort an array using bubble sort method.
//**************************************************************************/
//
//#include<stdio.h>
//#include<conio.h>
//int main()
//{	
//	int i,j,arr[5],arr_size=5,sorted=0,temp;
//	printf("Bubble Sort :-\n===================================\n");
//	for(i=0;i<arr_size;i++)
//	{
//		printf("Enter array element :");
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;(i<arr_size-1)&&(!sorted);i++)
//	{
//		sorted=1;
//		for(j=0;j<arr_size-i-1;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//				sorted=0;
//			}			
//		}		
//	}
//	printf("\n Sorted array element :");
//	for(i=0;i<arr_size;i++)
//	{
//		printf("\n %d ",arr[i]);
//	}
//	getch();
//	return(0);
//}
///*********************************  OUTPUT  ******************************************
//Bubble Sort :-
//===================================
//Enter array element :454
//Enter array element :12
//Enter array element :336
//Enter array element :56
//Enter array element :22
//
// Sorted array element :
// 12
// 22
// 56
// 336
// 454
//**************************************************************************************/