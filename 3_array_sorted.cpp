#include<iostream>

 using namespace std;

 
 
bool check_sorted (int arr[], int n)
{
  
for (int i = 1; i < n; i++)                           //function to check if array is sorted
   {
if (arr[i] < arr[i - 1])
	
return false;
    
 
}
  
return true;
}

int
main ()
{
  
 
int n;
  
 
cout << "Enter array size\n";                           //To get user defoned array
  
cin >> n;
  
 
int arr[n];
  
 
for (int i = 0; i < n; i++)
    
cin >> arr[i];
  
 
 
 
if (check_sorted (arr, n) == true)
    
cout << "Sorted";
  
  else                                          //checking if array is sorted or not
    
cout << "Not Sorted";
  
 
 
return 0;
}


 