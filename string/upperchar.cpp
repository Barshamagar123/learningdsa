#include<iostream>
#include<cctype>
using namespace std;
int main(){
  string name;
  cout << "enter a name:";
  cin >> name;
  for(int i=0;i<name.length();i++){
    name[i]=toupper(name[i]);
  }
  cout << name;
}