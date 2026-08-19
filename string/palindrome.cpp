#include<iostream>
using namespace std;
int main(){
    string name="abab";
    string reverse="";
    for(int i=name.length()-1;i>=0;i--){
        reverse+=name[i];
    }
    if(name==reverse){
        cout << "palindrome";
    }
    else{
        cout << "not palindrome";
    }
}