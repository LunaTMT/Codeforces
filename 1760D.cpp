#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
    
    int t;
    cin >> t; 
    while(t--) {  
        
        int n;
        cin >> n;  
        vector<int> arr(n); 
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];  
        }

        // Remove consecutive duplicates
        arr.erase(unique(arr.begin(), arr.end()), arr.end());

        int minima = 0;

        for (int i = 0; i < arr.size(); i++) {

            // Checking the first element
            if (i == 0 && arr[i] < arr[i + 1]) {
                minima++;
                continue;
            }

            // Checking the last element
            if (i == arr.size() - 1 && arr[i] < arr[i - 1]) {
                minima++;
                continue;
            }

            // Check if it is a minima for the internal elements
            if (arr[i] < arr[i + 1] && arr[i - 1] > arr[i]) {
                minima++;
            }

            // If more than 2 minima are found, break the loop
            if (minima > 2) {
                break;
            }
        }

        // Output result
        if (minima < 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
