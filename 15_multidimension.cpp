#include<iostream>

using namespace std;

int
main ()
{

  int arr[3][3] = { 10, 30, 60,
    20, 30, 40,
    40, 50, 60
  };
  for (int i = 0; i < 3; i++)	//up-down
    for (int j = 0; j < 3; j++)	//left - right
      cout << arr[i][j] << " ";
}
