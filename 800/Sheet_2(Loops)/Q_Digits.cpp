#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        if (N == 0) {
            cout << "0\n";
            continue;
        }
        bool first = true;
        while (N > 0) {
            int digit = N % 10;
            if (!first) cout << " ";
            cout << digit;
            first = false;
            N /= 10;
        }
        cout << "\n";
    }
    return 0;
}
