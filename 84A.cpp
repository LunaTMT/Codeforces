#include <iostream>
 
int main() {
    int n;
    std::cin >> n;
 
    // Calculate the maximum total number of soldiers killed in three turns
    int maxSoldiersKilled = 3 * n / 2;
 
    std::cout << maxSoldiersKilled << std::endl;
 
    return 0;
}