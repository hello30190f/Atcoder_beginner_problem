#include <iosteam>
#include <string.h>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> vec = {A,B,C}
    sort(vec.begin(), vec.end());

    cout << vec.at(2) - vec.at(0) << endl;
    // int max_V = max(A,B,C);
    // int min_V = min(A,B,C);
    // cout << (max_V - min_V) << endl;
  

}
