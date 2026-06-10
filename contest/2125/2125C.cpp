#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

bool hasOnlyLargePrimeFactors(ll n) {
    // Check divisibility by small primes < 10
    int smallPrimes[] = {2, 3, 5, 7};
    for (int p : smallPrimes) {
        if (n % p == 0) return false;
    }
    return true;  // No small prime factors
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        ll count = 0;

        for (ll i = l; i <= r; ++i) {
            if (hasOnlyLargePrimeFactors(i)) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
