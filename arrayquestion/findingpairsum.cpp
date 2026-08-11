#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    int target=6;
    int left=0;
    int right=4;
     while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            cout << arr[left] << "+" << arr[right] << "=" << target << endl;
            break;
        }
        else if(sum < target) {
  left++;

        }
        else{
            right--;
        }
     }
     return 0;
}