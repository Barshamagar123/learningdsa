#include<iostream>
using namespace std;
int main(){
    int arr[5]={6,5,4,3,2};
    bool sorted=true;
    for(int i=0;i<4;i++){
        if(arr[i]<arr[i+1]){
            sorted=false;
            break;
        }
    }
    if(sorted){
        cout << "it is sorted in decending";
    }
    else{
        cout << "unsorted in decending";
    }
}