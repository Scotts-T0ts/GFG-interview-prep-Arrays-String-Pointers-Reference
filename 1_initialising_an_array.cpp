#include<iostream>

using namespace std;

 
int
main ()
{
  
 
int arr[5] = { 1, 2, 3, 4, 5 };	//1st way of declaring array
  
int arr1[] = { 1, 2, 3, 4, 5 };	//its not compulsary to declare the size of array
  
int n = 4;
  
 
int arr2[n] = { 1, 2, 3, 4 };
  
 
int arr3[5] = { 10, 20 };	//Then 3 zeros will be assigned in the remaining spaces
  
return 0;

}