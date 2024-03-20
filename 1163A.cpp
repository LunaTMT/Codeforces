#include <iostream>
 
int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << (m == 0 || m == 1 ? 1 : std::min(m, n - m)) << std::endl;
    return 0;
}