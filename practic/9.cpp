#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Unique elements are: ";
    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
