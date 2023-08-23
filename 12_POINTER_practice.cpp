#include<iostream>

using namespace std;

int
main ()
{

  int arr[] = { 10, 20, 30 };
  int *ptr = arr;

  ++*ptr;
  cout << arr[0] << endl;
  cout << arr[1] << endl;
  cout << *ptr;

}
