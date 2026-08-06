#include<iostream>
using namespace std;
int main(){
    //accessing an array
    // int arr[5]={10,20,30,40,50};
    // cout << arr[0] << endl;
//updating an arrya
int arr[5]={10,20,30,40,50};
arr[2]=100;
// cout << arr[2] << endl;
for (int i=0;i<5;i++){
    cout << arr[i] << endl;
}
return 0;
}