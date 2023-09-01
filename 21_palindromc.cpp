#include<iostream>

using namespace std;

int main(){
    
    string str;
    cout<<"Enter a string\n";
    cin>>str;
    
    int start = 0;
    int end = str.length()-1;
    
    while (start<end){
        if(str[start]!=str[end]){
        cout<<"Not palindrome\n";
        return 0;}
        
        else{
            start++;
            end--;
            
        }
       
        
    }cout<<"yes\n";
}