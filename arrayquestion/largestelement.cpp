#include<iostream>
using namespace std;
int main(){
    int arr[5]={30,40,50,60,70};
    int largest=30;
    for (int i=1; i<5;i++){
   if(largest<arr[i]){
    largest=arr[i];
   }
    }
    cout << largest;
    return 0;
}