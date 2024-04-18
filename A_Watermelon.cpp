#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

void runTest() {
    int n;
    cin >> n;
    cout << (n >= 4 && n % 2 == 0 ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    runTest();

    return 0;
}

