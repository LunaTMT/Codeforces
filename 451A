#include <iostream>
 
int main() {
    int n, m;
    std::cin >> n >> m;

    int total = n * m;
    int turn  = 1; 

    while (total > 0) {
        total -= n + m - 1;
        n--;
        m--;;
        turn++;
    }
 
    std::cout << (turn % 2 ? "Akshat" : "Malvika");
    return 0;
}
