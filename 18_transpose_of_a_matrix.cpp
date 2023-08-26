#include <iostream>

 using namespace std;

int
main ()
{
  
int row, column;
  
 
cout << "Enter the number of rows: ";
  
cin >> row;
  
 
cout << "Enter the number of columns: ";
  
cin >> column;
  
 
int mat[row][column];
  
 
cout << "Enter the values for the matrix:" << endl;
  
for (int i = 0; i < row; i++)
    
for (int j = 0; j < column; j++)
      
cin >> mat[i][j];
  
 
cout << "Original Matrix:" << endl;
  
for (int i = 0; i < row; i++)
    {
      
for (int j = 0; j < column; j++)
	
cout << mat[i][j] << " ";
      
cout << endl;
    
} 
 
cout << "Transpose Matrix (" << column << "x" << row << " format):"
    << endl;
  
for (int i = 0; i < column; i++)
    {
      
for (int j = 0; j < row; j++)
	
cout << mat[j][i] << " ";
      
cout << endl;
    
} 
 
return 0;

}


