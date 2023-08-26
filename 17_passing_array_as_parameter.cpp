#include<iostream>

using namespace std;

void
print (int mat[][3], int m)
{
  for (int i = 0; i < m; i++)
    for (int j = 0; j < 3; j++)
      cout << mat[i][j] << " ";
}

int
main ()
{
  int mat[3][3] = { 1, 2, 3,
    4, 5, 6,
    7, 8, 9
  };
  print (mat, 3);

  return 0;
}
