#include <iostream>
#include <algorithm>

using namespace std;
 
int main() {
    int n = 12;
    int v = 89;
 
    if (v == n - 1) {
        cout << v;
        return 0;
    }
 
    int i = 1;
    int spent = std::min(n-1, v);
 
    while (i < n - v) {
        i++;
        spent += i;
    }
 
    cout << spent;
 
    return 0;
}