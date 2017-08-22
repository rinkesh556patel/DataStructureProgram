///*************************************************************************
//ROll No.= 18
//Name    = Patel Rinkeshkumar Bharatbhai
//Class   = MCA - II
//Subject = Data Structure
//program = Sort an array using selection sort method.
//**************************************************************************/
//#include<stdio.h>
//#include<conio.h>
//int main()
//{	
//	int i,j,arr[5],arr_size=5,min,location,temp;
//	printf("selection Sort :-\n===================================\n");
//	for(i=0;i<arr_size;i++)
//	{
//		printf("Enter array element :");
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<arr_size;i++)
//	{
//		min=arr[i];
//		location=i;
//		for(j=i+1;j<arr_size;j++)
//		{
//			if(min>arr[j])
//			{
//				min=arr[j];
//				location=j;
//			}
//			
//		}
//		temp=arr[i];
//		arr[i]=arr[location];
//		arr[location]=temp;
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
//selection Sort :-
//===================================
//Enter array element :21
//Enter array element :1
//Enter array element :99
//Enter array element :654
//Enter array element :32
//
// Sorted array element :
// 1
// 21
// 32
// 99
// 654
//**************************************************************************************/