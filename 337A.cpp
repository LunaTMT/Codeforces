#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    int n, m;
    std::cin >> n >> m;
 
    std::vector<int> puzzles(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> puzzles[i];
    }
 
    std::sort(puzzles.begin(), puzzles.end());
 
    int min_diff = INT_MAX;
    for (int i = n; i < m; ++i) {
        min_diff = std::min(min_diff, puzzles[i] - puzzles[i - n + 1]); // Update min_diff with the new group of n puzzles
    }
 
    std::cout << min_diff << std::endl;
 
    return 0;
}
