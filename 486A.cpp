#include <iostream>
 
int main() {
    long n;
    std::cin >> n;
    std::cout << (n % 2 ? -(n / 2 + 1) : n / 2);
    return 0;
}
