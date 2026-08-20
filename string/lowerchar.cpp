#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string word;
    cout << "enter any word:";
    cin >> word;
    for(int i=0;i< word.length();i++){
    word[i]=tolower(word[i]);
    }
    cout << "the lower case of the given word is:" << word;
}