#include<iostream>

using namespace std;

int
main ()
{

  int n;

  
  

  cout << "Enter the number of elements\n";
  cin >> n;

  int arr[n];
   int max = 0;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
    {
      if (arr[i] > max)
	max = arr[i];
    }
  cout << "Maximum is " << max;

}