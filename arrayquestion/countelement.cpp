#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,5,6,7};
    int count=0;
    for(int i=0; i<5;i++){
        if(arr[i]==6){
            count++;
        }
    }
    cout << count;
}