#include<iostream>
using namespace std;
int main(){
    string word="programming";
    int frequency[26]={0};
    string result="";
    for(int i=0;i<word.length();i++){
        if(frequency[word[i]-'a']==0){
            result+=word[i];
            
            //marks p as a seen
            frequency[word[i]-'a']++;
        }
    }
    cout << "word after removing duplicates : " << result;
    return 0;
}