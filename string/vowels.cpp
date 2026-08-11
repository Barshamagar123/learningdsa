#include <iostream>
#include <string>
using namespace std;

int main() {

    string name = "hieveryone";
    int count = 0;

    for (int i = 0; i < name.length(); i++) {

        if (name[i] == 'a' ||
            name[i] == 'e' ||
            name[i] == 'i' ||
            name[i] == 'o' ||
            name[i] == 'u') {

            count++;
        }
    }

    cout << "the number of the vowel sounds are :" << count;

    return 0;
}