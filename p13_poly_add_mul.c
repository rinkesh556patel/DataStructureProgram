//#include<stdio.h>
//#include<conio.h>
//void add_polynomial(int arr1[], int arr2[], int ans[])
//{
//	int i;
//    for(i=0;i<3;i++)
//        ans[i]=arr1[i]+arr2[i];
//}
//void mul_polynomial(int arr1[], int arr2[], int ans[])
//{
//    int i,j;
//    for(i=0;i<6;i++)
//    {
//        for(j=0;j<6;j++)
//        {
//            ans[i+j]+=arr1[i]*arr2[j];
//        }
//    }
//}
//void read(int arr[])
//{
//    int i;
//    for(i=2;i>=0;i--)
//    {
//        scanf("%d",&arr[i]);
//    }
//}
//void print(int arr[])
//{
//    int i;
//    for(i=5;i>=0;i--)
//    {
//        if(arr[i]==0)
//            continue;
//         if(i==0)
//             printf("%d",arr[i]);
//         else
//			 printf("%dX^%d + ",arr[i],i);
//    }
//	printf("\n");
//}
//void main()
//{
//	int arr1[6]={0},arr2[6]={0},i,res_add[6]={0},res_mul[6]={0},m=3,n=3;
//	printf("\n Enter Coefficient for polynomial 1 : \n");
//	printf("\n________________________________________________________\n");
//    read(arr1);
//    print(arr1);
//	printf("\n Enter Coefficient for polynomial 2 : \n");  
//	printf("\n________________________________________________________\n");
//    read(arr2);
//    print(arr2);
//    add_polynomial(arr1,arr2,res_add);
//	printf("\n______________POLYNOMIAL ADDITION_______________________\n");
//	print(res_add);
//    printf("\n________________________________________________________\n");
//    mul_polynomial(arr1,arr2,res_mul);
//    printf("\n______________POLYNOMIAL MULTIPLICATION_________________\n");
//    print(res_mul);
//	printf("\n________________________________________________________\n");
//	getch();
//}
///*
//
// Enter Coefficient for polynomial 1 :
//
//________________________________________________________
//3
//2
//1
//3X^2 + 2X^1 + 1
//
// Enter Coefficient for polynomial 2 :
//
//________________________________________________________
//2
//3
//2
//2X^2 + 3X^1 + 2
//
//______________POLYNOMIAL ADDITION_______________________
//5X^2 + 5X^1 + 3
//
//________________________________________________________
//
//______________POLYNOMIAL MULTIPLICATION_________________
//6X^4 + 13X^3 + 14X^2 + 7X^1 + 2
//
//________________________________________________________
//*/
