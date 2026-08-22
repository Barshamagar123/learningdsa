#include<iostream>
using namespace std;
int main(){
    string word="programming";
    int frequency[26]={0};
    for(int i=0;i<word.length();i++){
        frequency[word[i]-'a']++;
    }
    int maxFrequency=0;
    char mostFrequent;
    for(int i=0;i<word.length();i++){
        if(frequency[word[i]-'a'] > maxFrequency){
            maxFrequency=frequency[word[i]-'a'];
            mostFrequent=word[i];
        }
    }
    cout << "most frequent character is:" << mostFrequent << endl;
    cout << "frequency is" << maxFrequency << endl;
}