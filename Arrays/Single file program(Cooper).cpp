#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, c, coachNum;
    bool found = false;
    cin >> n;
    int coaches[n];
    for (int i = 0; i < n; i++) {
        cin >> coaches[i];
    }
    cin >> coachNum;
    sort(coaches, coaches + n);
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid =  lo+(hi - lo) / 2;
        if (coaches[mid] == coachNum) {
            found = true;
            break;
        } else if (coaches[mid] < coachNum) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    if (found) {
        cout << coachNum << ":Yes";
    } else {
        cout << coachNum << ":No";
    }
    return 0;
}