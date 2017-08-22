/*************************************************************************
ROll No.= 18
Name    = Patel Rinkeshkumar Bharatbhai
Class   = MCA - II
Subject = Data Structure
program = Sort an array using quick sort method.
**************************************************************************/
#include<iostream>
#include<conio.h>

using namespace std;

void heapsort(int[], int);
void maxheap(int [], int);
void satisfyheap(int [], int, int);

int main()
{
  int a[10], i, size;
  cout << "Enter Size Of Array : ";
  cin >> size;
  cout << "Enter " << size << " Numbers\n";
  for( i=0; i < size; i++)
  {
    cin >> a[i];
  }

  cout<<"\n\nOriginal Array : ";
  for(int i=0; i < size; i++)
  {
    cout << "\t" << a[i];
  }

  heapsort(a, size-1);

  cout<<"\n\nSorted Array   : ";
  for(int i=0; i < size; i++)
  {
    cout << "\t" << a[i];
  }

  getch();
}

void maxheap(int a[], int length)
{
  for(int i=(length/2); i >= 0; i--)
  {
    satisfyheap(a, i, length);
  }

  cout<<"\n\nMax Heap       : ";
  for(int i=0; i <= length; i++)
  {
    cout << "\t" << a[i];
  }
}

void heapsort(int a[], int length)
{
  int temp;

  maxheap(a,length);

  for(int i=length; i >= 0; i--)
  {
    satisfyheap(a,0, i);
    temp = a[0];
    a[0] = a[i];
    a[i] = temp;
  }
}

void satisfyheap(int a[], int i, int length)
{
  int l, r, largest, temp,b=1;
  l = 2*i+1;
  r = 2*i+2;
  if(l <= length && a[l] > a[i])
  {
    largest = l;
  }
  else
  {
    largest = i;
  }
  if( r <= length && a[r] > a[largest])
  {
    largest = r;
  }
  if(largest != i)
  {
    temp = a[i];
    a[i] = a[largest];
    a[largest] = temp;
    satisfyheap(a, largest, length);
  }
}

/*
******************************OUTPUT******************************
Enter Size Of Array : 10

Enter 10 Numbers
99
77
55
33
11
22
44
66
88
110


Original Array :        99      77      55      33      11      22      44      66      88      110

Max Heap       :        110     99      55      88      77      22      44      66      33      11

Sorted Array   :        11      22      33      44      55      66      77      88      99      110
******************************************************************/
