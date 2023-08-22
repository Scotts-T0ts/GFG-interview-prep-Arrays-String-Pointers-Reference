#include<iostream>

using namespace std;

int
main ()
{

  int arr[] = { 10, 20, 30, 40 };

  int *ptr = arr;
  int *ptr2 = ptr + 3;

  cout << *ptr << " " << ptr << " ";
  ptr++;
  cout << *ptr << " " << ptr << " ";
  ptr--;
  cout << *ptr << " " << ptr << " ";
  cout << *ptr2 << " " << ptr2 << " ";


  return 0;
}