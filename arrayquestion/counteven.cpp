#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    int count=0;
    for (int i=0; i<5;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
   cout << count;
}