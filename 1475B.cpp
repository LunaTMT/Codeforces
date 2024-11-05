#include <iostream>
 
using namespace std;
 
int main(){
    int n;
    cin >> n; 
    
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        
        if (x < 2020) {
            cout << "NO" << endl;
            continue;
        }
        
        int remainder = x % 2020;
        int quotient  = x / 2020;
        
        if (remainder <= quotient){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
