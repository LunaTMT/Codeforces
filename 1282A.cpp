#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        
        // Determine Polycarp's path range
        int start = min(a, b);
        int end = max(a, b);
        
        // Determine coverage range
        int coverage_start = c - r;
        int coverage_end = c + r;
        
        // Calculate intersection range
        int inter_start = max(start, coverage_start);
        int inter_end = min(end, coverage_end);
        
        // Time in coverage area
        int time_in_coverage = (inter_start < inter_end) ? (inter_end - inter_start) : 0;
        
        // Total time of travel
        int total_time = end - start;
        
        // Unavailable time
        int unavailable_time = total_time - time_in_coverage;
        
        cout << unavailable_time << endl;
    }
    
    return 0;
}
