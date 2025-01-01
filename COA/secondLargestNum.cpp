#include <iostream>
using namespace std;

int main() {
    int arr[10] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    int large = arr[0];
    int second = INT32_MIN;
    bool found = false;

    for (int i = 1; i < 10; i++) {
        if (arr[i] > large) {
            second = large;
            large = arr[i];
            found = true;
        } else if (arr[i] > second && arr[i] < large) {
            second = arr[i];
            found = true;
        }
    }

    if (!found) 
        cout << "There is no second largest element found in the given array";
    else
        cout << "Second largest element is " << second;

}                            