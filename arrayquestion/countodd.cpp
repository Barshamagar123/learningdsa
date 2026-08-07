#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,20,30,7,5};
    int count=0;
    for(int i=0; i<5; i++){
        if(arr[i]%2!=0){
           count++;
        }
    }
    cout << count;
}