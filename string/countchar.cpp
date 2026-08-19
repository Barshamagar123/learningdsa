#include<iostream>
using namespace std;
int main(){
    string name="abababa";
    int target='a';
    int count=0;
    for(int i=0; i< name.length();i++){
   if(name[i]==target){
count++;
   }
    }
    cout << "the total number of the specific character:" << count;
}