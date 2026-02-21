#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> str = {"a", "b", "c"};
    int n = str.size();

    // Total subsequences = 2^n
    int total = 1 << n;
    cout<<"the tottal is"<<" "<<total<<endl;

    for (int mask = 0; mask < total; mask++) {
        for (int j = 0; j < n; j++) {
            if (mask & (1 << j)) {
               int n2=1<<j;
                cout<<n2;
                // cout << str[j];
            }
        }
        cout << endl;
    }
    return 0;
}
