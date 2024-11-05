#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int input;
    cin >> input;
 
    vector<short> luckyNumbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
 
    for (short i : luckyNumbers) {
        if (input % i == 0) {
            cout << "YES\n";
            return 0;
        }
    }
 
    cout << "NO\n";
    return 0;
}
