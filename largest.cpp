#include<iostream>
using namespace std;
int main(){
    int arr[5]={20,50,70,100,120};
    int largest=arr[0];
    for (int i=1; i< 5; i++){
        largest=arr[i];
    }
    cout << largest << endl;
    return 0;
}