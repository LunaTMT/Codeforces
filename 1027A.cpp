#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; 
    
    for (int i = 0; i < n; ++i) {
        int len;
        cin >> len; 

        string s;
        cin >> s; 

        bool isValid = true;
        int left = 0, right = len - 1;

        while (left < right) {
            char a = s[left], b = s[right];

            if (a != b && abs(a - b) != 2) {
                isValid = false;
                break;
            }

            left++;
            right--;
        }

        if (isValid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
