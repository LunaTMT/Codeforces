#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    vector<int> t;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        t.push_back(temp);
    }
 
    sort(t.begin(), t.end());
 
    vector<int> a;
    a.push_back(t[0]);
    for (int i = 1; i < n; i++) {
        if (t[i] != t[i - 1]) {
            a.push_back(t[i]);
        }
    }
 
    for (int i = 0; i < n - 2; i++) {
        if (a[i] + 1 == a[i + 1] && a[i] + 2 == a[i + 2]) {
            cout << "YES" << endl;
            return 0;
        }
    }
 
    cout << "NO" << endl;
    return 0;
}
