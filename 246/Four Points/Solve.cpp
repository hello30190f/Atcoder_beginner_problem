#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    int position1[6];
    int odd[3]; // y
    int even[3]; // x

    int diffrece_x[2];
    int diffrece_y[2];
    // int position2[2];
    // int position3[2];

    for(int i = 0; i < 6; i++){
        cin >> position1[i];
        // cout << position1[i] << endl;
    }

    for(int i = 0; i < 3; i++){
        even[i] = position1[i * 2];
        cout << "even y " << even[i] << endl;
        // cout << position1[i] << endl;
    }

    for(int i = 0; i < 3; i++){
        odd[i] = position1[i * 2 + 1];
        cout << "odd x " << odd[i] << endl;
        // cout << position1[i] << endl;
    }


cout << endl;
cout << endl;
cout << endl;
cout << endl;



    for(int i = 0; i < 2; i++){
        // odd[i] = position1[i * 2 + 1];
        if(odd[i] == odd[i + 1]){
            // diffrece_x = odd[i];
        }else{
            diffrece_y[i] = odd[i];
            diffrece_y[i + 1] = odd[i  + 1];

        }
        // cout << odd[i] << endl;
        // cout << position1[i] << endl;
    cout << "y" << i << " " <<diffrece_y[i] << endl;
        
    }

    for(int i = 0; i < 2; i++){
        // odd[i] = position1[i * 2 + 1];
        if(even[i] == even[i + 1]){
            // diffrece_x = even[i];
        }else{
            diffrece_x[i] = even[i];
            diffrece_x[i + 1] = even[i  + 1];

        }

    cout << "x"  << i << " " << diffrece_x[i] << endl;

        // cout << odd[i] << endl;
        // cout << position1[i] << endl;
    }


}


// ANS URL
// https://atcoder.jp/contests/abc246/editorial/3704
