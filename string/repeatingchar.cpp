#include<iostream>
using namespace std;
int main(){
    string word="abcdebcd";
    int frequency[26]={0};
    for(int i=0;i<word.length();i++){
        frequency[word[i]-'a']++;
    }
    for(int i=0;i<word.length();i++){
        if(frequency[word[i]-'a']>1){
            cout << "the first repeating value is:" << word[i];
            return 0;
        }
    }
    cout << "no repeating value is found:";
}