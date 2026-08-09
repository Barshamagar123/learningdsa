#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
   int largest=arr[0];
   int smallest=arr[0];
   int difference;
   for(int i=1;i<5;i++){
   if(arr[i]>largest){
    largest=arr[i];
   }
    if(arr[i]<smallest){
        smallest=arr[i];
    }
   
}

difference=largest-smallest;
cout << "the largest value is:" << largest << endl;
cout << "the smallest value is:" << smallest << endl;
cout << "the differences between them is :" << difference << endl;
}