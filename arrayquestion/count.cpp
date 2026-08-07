#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,8,8,9,8};
   int count=0;
    for(int i=0; i<5; i++){
 if(arr[i]==8){
    count++;
 }
    }
    cout << count;
}