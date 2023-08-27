#include<iostream>

using namespace std;

int
main ()
{
  string str = "neelay";
  cout << str.length () << endl;	//string length
  str = str + "abc";		//concatenation
  cout << str << endl;
  cout << str.substr (1, 3) << endl;	//slicing
  cout << str.find ("eel");	//finding in the string

  return 0;
}
