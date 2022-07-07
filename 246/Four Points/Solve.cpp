#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    int position1[6];
    int odd[3]; // y
    int even[3]; // x
    // int position2[2];
    // int position3[2];

    for(int i = 0; i < 6; i++){
        cin >> position1[i];
        // cout << position1[i] << endl;
    }

    for(int i = 0; i < 3; i++){
        
        even[i] = position1[i * 2];
        cout << even[i] << endl;
        // cout << position1[i] << endl;
    }

        for(int i = 0; i < 3; i++){
        odd[i] = position1[i * 2 + 1];
        cout << odd[i] << endl;
        // cout << position1[i] << endl;
    }
}
