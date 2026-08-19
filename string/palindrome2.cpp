#include<iostream>
using namespace std;
int main(){
    string name;
    cout << "enter a word:";
    cin >> name;
    int left=0;
    int right=name.length()-1;
    bool palindrome=true;
    while(left<right){
        if(name[left]!=name[right]){
            palindrome=false;
            break;
        }
        left++;
        right--;
    }
    if(palindrome){
        cout << "palindrome";
    }
    else{
        cout << "not palindrome";
    }
    return 0;
}