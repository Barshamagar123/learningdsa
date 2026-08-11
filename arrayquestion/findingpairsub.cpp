#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {4, 5, 6, 7, 8};
    int target = 4;
    int left = 0;
    int right = 4;
    while (left < right)
    {
        int sub = arr[right] - arr[left];
        if (sub == target)
        {
            cout << arr[right] << "-" << arr[left] << "=" << target << endl;
            break;
        }
        else if (sub < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return 0;
}