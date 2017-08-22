///*************************************************************************
//ROll No.= 18
//Name    = Patel Rinkeshkumar Bharatbhai
//Class   = MCA - II
//Subject = Data Structure
//program = Sort an array using merge sort method.
//**************************************************************************/
//#include<stdio.h>
//#include<conio.h>
//
//void disp_arr(int arr[],int arr_size)
//{
//	int i;
//	for(i=0;i<arr_size;i++)
//	{		
//		printf("\n%d",arr[i]);
//	}
//}
//void merge_array(int arr[],int low,int high,int mid)
//{
//	int arr1[10],arr2[10];
//	int n1,n2,i,j,k;
//	n1=mid-low+1;
//	n2=high-mid;
//
//	for(i=0; i<n1; i++)
//		arr1[i]=arr[low+i];
//	for(j=0; j<n2; j++)
//		arr2[j]=arr[mid+j+1];
//
//	arr1[i]=9999;  
//	arr2[j]=9999;
//
//	i=0;
//	j=0;
//	for(k=low; k<=high; k++)
//	{
//		if(arr1[i]<=arr2[j])
//		  arr[k]=arr1[i++];
//		else
//		  arr[k]=arr2[j++];
//	}
//}
//void merge_sort(int low,int high,int arr[])
//{
//	int mid;
//	if(low < high)
//	{
//		mid=(low + high) / 2;
//		merge_sort(low,mid,arr);
//		merge_sort(mid + 1,high,arr);
//		merge_array(arr,low,high,mid);
//	}
//}
//void main()
//{
//	int i,arr[10],arr_size=8,low,high;
//	low = 0 ;
//	high = arr_size - 1;
//	for(i=0;i<arr_size;i++)
//	{
//		printf("\nEnter array element -> ");
//		scanf("%d",&arr[i]);
//	}
//	merge_sort(low,high,arr);
//	printf("\nSorted array element -> \n=========================================\n");
//	disp_arr(arr,arr_size);
//	getch();
//}
///******************************* OUTPUT *******************************************
//
//Enter array element -> 45
//
//Enter array element -> 12
//
//Enter array element -> 32
//
//Enter array element -> 14
//
//Enter array element -> 56
//
//Enter array element -> 98
//
//Enter array element -> 65
//
//Enter array element -> 852
//
//Sorted array element ->
//=========================================
//12
//14
//32
//45
//56
//65
//98
//852
//**************************************************************************/