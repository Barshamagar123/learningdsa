#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,2,3,3,4};
    int j=0;
    for(int i=1;i<5;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    cout << "array after removing all the duplicates: ";
    for(int i=0;i<=j;i++){
        cout << arr[i] << endl;
    }
}