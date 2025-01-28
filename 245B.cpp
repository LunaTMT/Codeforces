#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int leftmost = -1, rightmost = -1;

        // Find the leftmost and rightmost staircase positions
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (leftmost == -1) leftmost = i;
                rightmost = i;
            }
        }

        if (leftmost == -1) {
            // No staircases, Nikolay can visit all rooms on one floor
            cout << n << endl;
        } else {
            // Calculate the maximum distance
            int max_distance = 2 * max(rightmost + 1, n - leftmost);
            cout << max_distance << endl;
        }
    }

    return 0;
}
