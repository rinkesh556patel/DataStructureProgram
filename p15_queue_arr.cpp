//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void enqueue(int arr[],int &rear, int &front)
//{
//    rear=(rear+1)%5;
//        cin>>arr[rear];
//        if(front==-1 || arr[front]==NULL) front++;
//}
//void dequeue(int arr[], int &front)
//{
//    arr[front]=NULL;
//    front++;
//    if(front==5)
//        front=0;
//    cout<<endl<<endl<<"Element Deleted"<<endl<<endl;
//}
//
//void disp(int arr[], int front, int rear)
//{
//    cout<<endl<<"__________________________________"<<endl;
//    while(front!=rear)
//    {
//        cout<<arr[front]<<endl;
//        front=(front+1)%5;
//    }
//    cout<<arr[rear]<<endl;
//    cout<<"__________________________________"<<endl<<endl;
//}
//
//int main()
//{
//    int arr[5];
//    int front=-1,rear=-1;
//    do
//    {
//        cout<<"1.Insert Element"<<endl;
//        cout<<"2.Delete Element"<<endl;
//        cout<<"3.Display Queue Element"<<endl;
//        cout<<"4.Clear Screen"<<endl;
//        cout<<"5.Exit"<<endl;
//		cout<<endl<<"__________________________________"<<endl<<"Enter Your Choice : ";
//        int choice;
//        cin>>choice;
//        switch(choice)
//        {
//        case 1:
//            if(((rear+1)%5)!=front)
//            {
//                enqueue(arr,rear,front);
//            }
//            else
//            {
//                cout<<endl<<"!!! QUEUE IS FULL !!!"<<endl<<endl;
//            }
//            break;
//        case 2:
//            if(front==-1)
//                cout<<endl<<"!!! QUEUE is Empty !!! Nothing to DELETE"<<endl<<endl;
//            else if(front==rear)
//            {
//                arr[front]=NULL;
//                cout<<endl<<endl<<"Element Deleted"<<endl<<endl;
//                cout<<endl<<"!!! QUEUE is Empty !!!"<<endl<<endl;
//            }
//            else if(arr[front]!=NULL)
//            {
//                dequeue(arr,front);
//            }
//            break;
//        case 3:
//             if(front==-1 || arr[front]==NULL)
//            {
//                cout<<endl<<"!!! QUEUE is Empty !!!!"<<endl<<endl;
//            }
//            else
//            {
//                disp(arr,front,rear);
//            }
//            break;
//        case 4:
//            system("cls");
//            break;
//        case 5:
//            return 0;
//        }
//    }while(1);
//}
///*
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 1
//11
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 1
//12
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 1
//13
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 1
//14
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice :
//
//3
//
//__________________________________
//11
//12
//13
//14
//__________________________________
//
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 2
//
//
//Element Deleted
//
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 2
//
//
//Element Deleted
//
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 3
//
//__________________________________
//13
//14
//__________________________________
//
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 2
//
//
//Element Deleted
//
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 2
//
//
//Element Deleted
//
//
//!!! QUEUE is Empty !!!
//
//1.Insert Element
//2.Delete Element
//3.Display Queue Element
//4.Clear Screen
//5.Exit
//
//__________________________________
//Enter Your Choice : 5
//*/
