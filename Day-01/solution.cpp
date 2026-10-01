#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minRow = n, maxRow = -1;
    int minCol = m, maxCol = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') {
                minRow = min(minRow, i);
                maxRow = max(maxRow, i);
                minCol = min(minCol, j);
                maxCol = max(maxCol, j);
            }
        }
    }

    for (int i = minRow; i <= maxRow; i++) {
        for (int j = minCol; j <= maxCol; j++) {
            cout << a[i][j];
        }
        cout << '\n';
    }

    return 0;
}
