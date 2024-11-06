#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Global declarations for ease of use
int R, C;
vector<string> pasture;

// Returns the adjacent positions given any position so long as in-bounds
vector<pair<int, int>> getAdjacent(int i, int j) {
    vector<pair<int, int>> positions;

    if (i > 0)   positions.emplace_back(i - 1, j);  // Up
    if (j > 0)   positions.emplace_back(i, j - 1);  // Left
    if (i < R - 1) positions.emplace_back(i + 1, j);  // Down
    if (j < C - 1) positions.emplace_back(i, j + 1);  // Right

    return positions;
}

int main() {
    // Inputs
    cin >> R >> C;
    pasture.resize(R);

    // Reading the pasture layout
    for (int i = 0; i < R; ++i) {
        cin >> pasture[i];
    }

    // Iterating over the pasture
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            char current = pasture[i][j];

            if (current == 'S') { // Only checking cases of sheep (S) 
                for (auto [a, b] : getAdjacent(i, j)) {  
                    char adjacent = pasture[a][b]; // Adjacent position
    
                    if (adjacent == 'W') { //Is the adjacent positon a wolf?
                        cout << "No";
                        return 0;
                    }
    
                    if (adjacent == '.') // If adjacent is empty space, place a dog ('D')
                        pasture[a][b] = 'D';
                }
            }
        }
    }
    
    // Possible to protect the sheep
    cout << "Yes" << endl;

    for (const string& row : pasture) {
        cout << row << endl;
    }

    return 0;
}
