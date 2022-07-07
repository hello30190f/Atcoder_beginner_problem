#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int max_v = max(max(A,B),C);
    int min_v = min(min(A,B),C);
    cout << max_v - min_v << endl;

}
