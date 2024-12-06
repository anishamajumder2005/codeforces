#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the number of happy days
int count_happy_days(int n, vector<int> &a) {
    int happy_days = 0;
    int total_pieces = 0;
    int layer = 0;

    for (int i = 0; i < n; ++i) {
        total_pieces += a[i];
        // Check if total_pieces matches the requirement for completing a new layer
        while (1 + 8 * (layer * (layer + 1)) / 2 <= total_pieces) {
            layer++;  // Increment the layer count
        }
        // If the total pieces at the end of the day exactly match the layers' requirement
        if (1 + 8 * (layer * (layer - 1)) / 2 == total_pieces) {
            happy_days++;
        }
    }

    return happy_days;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << count_happy_days(n, a) << endl;
    }
    return 0;
}
