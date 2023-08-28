#include <iostream>
using namespace std;

int main() {
    string str;
    string newstr;

    cout << "Enter a string" << endl;
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
        newstr += str[i];
    }

    cout << newstr;

    return 0;
}
