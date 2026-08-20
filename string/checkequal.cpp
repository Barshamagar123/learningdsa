#include<iostream>
using namespace std;
int main(){
    string word1;
    string word2;
    cout << "enter the first word:" << endl;
     cin >> word1;
    cout << "enter the second word:" << endl;
    cin >> word2;
if(word1==word2){
    cout << "both words are equal: " << word1 << "and" << word2;
}
else{
    cout << "both are not equal";
}

}