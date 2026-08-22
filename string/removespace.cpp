#include<iostream>
using namespace std;
int main(){
    string word="hello world";
    string result="";
    for(int i=0;i<word.length();i++){
        if(word[i]!=' '){
            result+=word[i];
        }
    }
    cout << " after removing the space: " << result;
    return 0;
}