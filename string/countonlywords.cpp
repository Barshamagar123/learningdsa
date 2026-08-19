#include<iostream>
using namespace std;
int main(){
    string word="i love you programming";
    int count=0;
    for(int i=0;i<word.length();i++){
        if(word[i]!=' '){
            count ++;
        }
    }
            cout << "the numbers of the words are: " << count;

}