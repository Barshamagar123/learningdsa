#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    int smallest=2;
    for(int i=0; i<5; i++){
        if(smallest>arr[i]){
            arr[i]=smallest;
        }
    }
cout << smallest;

}