#include <iostream>
#include <vector>
using namespace std;

int main() {

    // vector<int> arr = {10, 20, 30, 40, 50};
    // cout << arr.size();
//     arr.push_back(50);
//    for (int i = 0; i<arr.size(); i++){
//     cout << arr[i] << endl;
//    }
// for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
    

//     return 0;


//searching 
// int target=30;
// for(int i=0; i<arr.size(); i++)
// {
//     if(arr[i]==target){
//     cout << "found";
//     }
// }


vector<int> arr= {2,3,4,5,6,6};
int count =0;
for(int i=0; i<arr.size(); i++){
if(arr[i] == 6){
 count++;
}
}
cout << count;
}

