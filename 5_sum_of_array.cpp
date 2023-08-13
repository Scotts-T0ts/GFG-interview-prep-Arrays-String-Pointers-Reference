#include<iostream>

using namespace std;

int
main ()
{
  int n;
  int count = 0;

  cout << "Enter the number of elements\n";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
    {				//for storing
      cin >> arr[i];
    }

  for (int i = 0; i < n; i++)
    {
      count = count + arr[i];	//for adding
    }
  cout << "Sum is " << count;

  return 0;
}