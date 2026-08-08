#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    int smallest=2;
    int secondSmallest=3;
   for(int i=2;i<5;i++){
    if(arr[i]<smallest){
        secondSmallest=smallest;
                smallest=arr[i];

    }
    else if (arr[i] < secondSmallest){
secondSmallest=arr[i];
    }
    
   }
   cout << "smallest is :" << smallest;
    cout << "second smallest is :" << secondSmallest;
    return 0;
}