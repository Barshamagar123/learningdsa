#include<iostream>
using namespace std;
int main(){
    string name="bbbbb";
    int count=0;
    for(int i=0;i<name.length();i++){
        if(name[i]!='a' &&
        name[i] != 'e' &&
        name[i] != 'i' &&
        name[i]!= 'o' && 
        name[i] !='u'
    )
    count++;
    }
    cout << "the numbers of the consonents are : " << count;
}