#include<iostream>

 using namespace std;

 
int 
main () 
{
  
int arr[5] = { 1, 2, 3, 4, 5 };
  
 
int n = sizeof (arr) / sizeof (arr[0]);	//number of elements
  
for (int i = 0; i < n; i++)	//array traversal method 1
    cout << arr[i] << " ";
  
cout << endl;
  
int arr1[] = { 1, 2, 3, 4, 5, 6 };

 
for (int x:arr1)		//array traversal method 2
    cout << x << " ";
  
return 0;

 
 
}

