#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int sum=0;
    int average;
    for(int i=0; i<5; i++){
        sum+=arr[i];
        average=sum/5;
    }
    cout << average;
}