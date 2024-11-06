// solution 1 - in-built sorting algorithm

#include <iostream>
#include <vector>
#include <algorithm>  
 
using namespace std;
 
int main() {
    int s, n, x, y;
    
    // Correct the input
    cin >> s >> n;  
    
    vector<pair<int, int>> stats;
    
    // Input data
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;  // Use >> for input
        stats.emplace_back(x, y);
    }
 
    // Sort the statistics by each dragon's strength in ascending order
    sort(stats.begin(), stats.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first; 
    });
    
    //We now check if kirita can win 
    for (auto [x, y] : stats){
        if (s > x) s += y;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}


// solution 2 - merge-sort implementation

#include <iostream>
#include <vector>

using namespace std;

// Function to merge two halves
void merge(vector<pair<int, int>>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;  // Size of the left half
    int n2 = right - mid;     // Size of the right half

    // Temporary arrays to hold the data
    vector<pair<int, int>> leftArr(n1), rightArr(n2);

    // Copy data to temporary arrays leftArr[] and rightArr[]
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into the original array
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i].first <= rightArr[j].first) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArr[], if any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr[], if any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Function to implement Merge Sort
void mergeSort(vector<pair<int, int>>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // Find the middle point

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int s, n, x, y;
    
    cin >> s >> n;
    
    vector<pair<int, int>> stats;
    
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        stats.emplace_back(x, y);
    }

    // Sorting stats using Merge Sort based on the dragon's strength
    mergeSort(stats, 0, n - 1);
    
    // Checking if Kirita can win
    for (auto [x, y] : stats) {
        if (s > x) s += y;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}
