 #include <iostream>
using namespace std;

long long getOdd(long long n) {
    return (n + 1) / 2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        cin >> n >> k;
        long long c = getOdd(n);
        if (n >= k)
            c -= getOdd(n - k);
        c = (c % 2) ^ 1;
        cout << (c ? "YES" : "NO") << "\n";
    }
    return 0;
}
