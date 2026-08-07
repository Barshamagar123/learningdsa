#include<iostream>
using namespace std;
int main(){
int arr[5]={2,3,4,5,6};
int largest=2;
int secondlargest;
for(int i=0; i<5; i++){
if(largest<arr[i]){
    largest=arr[i];
   
}
}
cout << largest;
}