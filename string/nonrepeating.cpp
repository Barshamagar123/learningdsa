#include<iostream>
using namespace std;
int main(){
    string word="aabbccd";
    int frequency[26]={0};
    for(int i=0;i<word.length();i++){
        frequency[word[i]-'a']++;
    }
    for(int i=0;i<word.length();i++){
        if(frequency[word[i]-'a']==1){
            cout << "the frist non repeating valueis :" << word[i];
            return 0;
        }
       
    }
    cout << "no any repeaeting valueis occur";

    return 0;

}