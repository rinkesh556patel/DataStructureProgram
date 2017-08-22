///*************************************************************************
//ROll No.= 18
//Name    = Patel Rinkeshkumar Bharatbhai
//Class   = MCA - II
//Subject = Data Structure
//program = Sort an array using quick sort method.
//**************************************************************************/
//#include<stdio.h>
//#include<conio.h>
//void swap(int *a,int *b){
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//}
//void quick_sort(int arr[],int low,int high){
//	int pivot,j,temp,i;
//	if(low<high){
//		pivot = low;
//		i = low;
//		j = high;
//		while(i<j){
//		   while((arr[i]<=arr[pivot])&&(i<high))
//				i++;
//		   while(arr[j]>arr[pivot])
//				j--;		
//		   if(i<j)
//				swap(&arr[i],&arr[j]);
//		}
//		swap(&arr[pivot],&arr[j]);
//		quick_sort(arr,low,j-1);
//		quick_sort(arr,j+1,high);
//	}
//}
//void main(){
//	int *arr,arr_size,i,low,high;
//	printf("\n_________________________________");
//	printf("\nEnter array size : ");
//	scanf("%d",&arr_size);
//	arr=(int *)malloc(sizeof(int) * arr_size);
//	printf("\nEnter array element : ");
//	printf("\n_________________________________");
//	for(i=0;i<arr_size;i++){
//		printf("\narray element %d -> ",i);
//		scanf("%d",&arr[i]);
//	}
//	low=0;
//	high=arr_size-1;
//	quick_sort(arr,low,high);
//	printf("\n_________________________________");
//	printf("\nAfter Sort : ");
//	printf("\n_________________________________");
//	for(i=0;i<arr_size;i++){
//		printf("\narr[%d] -> %d ",i,arr[i]);
//	}
//	getch();
//}
///******************************** OUTPUT ******************************************
//
//_________________________________
//Enter array size : 8
//
//Enter array element :
//_________________________________
//array element 0 -> 12
//
//array element 1 -> 36
//
//array element 2 -> 54
//
//array element 3 -> 21
//
//array element 4 -> 36
//
//array element 5 -> 95
//
//array element 6 -> 63
//
//array element 7 -> 25
//
//_________________________________
//After Sort :
//_________________________________
//arr[0] -> 12
//arr[1] -> 21
//arr[2] -> 25
//arr[3] -> 36
//arr[4] -> 36
//arr[5] -> 54
//arr[6] -> 63
//arr[7] -> 95
//**********************************************************************************/