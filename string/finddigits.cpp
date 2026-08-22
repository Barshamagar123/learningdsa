#include<iostream>
using namespace std;
int main(){
    string word="1234";
   bool onlydigits=true;
   for(int i=0;i<word.length();i++){
    if(!isdigit(word[i])){
     onlydigits=false;
     break;
    }
   }
   if(onlydigits){
    cout << "yes, the string contains the digits";
   }
   else{
    cout << "no, the string does not contians the digits";
   }
   return 0;
}