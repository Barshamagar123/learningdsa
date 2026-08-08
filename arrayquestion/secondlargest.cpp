#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    int largest = arr[0];
    int secondLargest = arr[1];
    if (secondLargest > largest)
    {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    for (int i = 2; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]> secondLargest){
            secondLargest=arr[i];
        }
    }
    cout << "largest " << largest << endl;
    cout << "secondlargest " << secondLargest << endl;
}