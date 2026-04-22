#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long x;
        cin >> x;

        long long count = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<long long, long long> freq;

            long long target = x - a[i];

            for (int j = i + 1; j < n; j++) {
                long long need = target - a[j];

                if (freq.count(need)) {
                    count += freq[need];
                }

                freq[a[j]]++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}