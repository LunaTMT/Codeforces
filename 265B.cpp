#include <iostream>
#include <cmath> 
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int res;
    cin >> res;
 
    int prev = res; // Initial height of the first tree
    int cur;
    // Checking absolute difference between each height of each tree
    
    for (int i = 1; i < n; ++i) {
        cin >> cur;
        res += abs(prev - cur); // Add the difference in height
        prev = cur; // Update prev to the current tree height
    }
 
    cout << res + (2 * n) - 1 << endl; // Add time for eating and jumping
    return 0;
}
