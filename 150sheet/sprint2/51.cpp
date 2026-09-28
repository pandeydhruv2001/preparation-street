class Solution {
public:
    int primeUptoN(int n) {
        // Step 1: Assume all numbers are prime
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

        // Step 2: Cross out multiples starting from p*p
        for (int p = 2; p * p <= n; p++) {
            if (isPrime[p]) {
                for (int m = p * p; m <= n; m += p) {
                    isPrime[m] = false;
                }
            }
        }

        // Step 3: Print primes and count them
        int count = 0;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                cout << (count == 0 ? "" : " ") << i;
                count++;
            }
        }
        cout << "\n";
        return count;
    }
};
