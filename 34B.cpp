#include <iostream>
#include <cmath> 
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Sort the array in ascending order
    sort(arr, arr + n);
    
    int total = 0;
    for (int i = 0; i < m; ++i) {
        if (arr[i] < 0) { // Only add negative values
            total += abs(arr[i]);
        } else {
            break; // No need to check further if arr[i] >= 0
        }
    }
    
    cout << total << endl;
    return 0;
}
