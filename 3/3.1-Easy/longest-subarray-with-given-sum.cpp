#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;
    int start = -1, end = -1; // Initialize to -1 as a default value
    int maxi = 0;
    int count = 0, localMaxi = 0;

    for (int i = 0; i < size; i++) {
        count += arr[i];
        if (count == sum) {
            if (localMaxi > maxi) {
                maxi = localMaxi;
                start = i - maxi + 1; // Adjust indices to start from 0
                end = i+1;
            }
            count = 0;
            localMaxi = 0;
        } else {
            localMaxi++;
        }
    }

    if (start == -1 && end == -1) {
        cout << "No subarray found with the given sum" << endl;
    } else {
        cout << "{ " << start << " , " << end << " }" << endl;
    }

    return 0;
}
