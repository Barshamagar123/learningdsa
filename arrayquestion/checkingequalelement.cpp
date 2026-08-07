#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,5,5,5,5};
    bool equal=true;
    for(int i=0;i<4;i++){
        if(arr[i]!=arr[0]){
        equal=false;
        break;
        }
    }
    if(equal){
        cout << "all elemenets are equal";
    }
        else{
            cout << "all elemenrs are not equal";
        }
}