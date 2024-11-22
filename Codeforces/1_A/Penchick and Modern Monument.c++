// Division 2
// Problem link: https://codeforces.com/contest/2031/problem/A

#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n]; 
        unordered_map<int, int> freq_map;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq_map[a[i]]++;
        }

        int max_freq = 0;
        for (const auto& pair : freq_map) {
            max_freq = max(max_freq, pair.second);
        }

        int result = n - max_freq;
        cout << result << endl;
    }

    return 0;
}
