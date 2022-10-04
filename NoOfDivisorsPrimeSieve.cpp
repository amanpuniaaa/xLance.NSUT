#include <bits/stdc++.h>
using namespace std;

// Get prime factors of a number.

vector<int> primeSieve(int *p, int n) {
    // Special cases
    p[2] = 1;
    p[1] = p[0] = 0;
    // First mark all odd numbers as prime
    for (int i = 3; i < n; i += 2) {
        p[i] = 1;
    }
    // Sieve
    for (long long int i = 3; i < n; i += 2) {
        // If current number is not marked 0, it is prime.
        if (p[i] == 1) {
            // Mark all multiples of 3 as not prime
            for (long long int j = i * i; j < n; j = j + i) {
                p[j] = 0;
            }
        }
    }
    vector<int> primes;
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (p[i] == 1) {
            primes.push_back(i);
        }
    }
    return primes;
}

int no_of_divisors(int n, vector<int> &primes) {
    int i = 0;
    int p = primes[0];
    int ans = 1;
    while (p * p <= n) {
        if (n % p == 0) {
            int cnt = 0;
            while (n % p == 0) {
                n = n / p;
                cnt++;
            }
            ans *= (cnt + 1);
            // If we have 2^2 as factors of a number, then we can chose powers
            // of 2 to make divisor in 3 ways which are 0,1 or 2.
        }
        i++;
        p = primes[i];
    }
    if (n != 1) {  // End mein ek prime bachega
        ans *= (1 + 1);
        // End mein ek prime bacha toh uski power chunne ke 2 tareeke 0 or 1
    }
    return ans;
}

int main() {
    int n = 1000000;
    int p[n] = {0};
    vector<int> primes = primeSieve(p, 100);

    int t;
    cin >> t;
    while (t--) {
        int no;
        cin >> no;
        int divisors = no_of_divisors(no, primes);
        cout << divisors << endl;
    }
    return 0;
}