class Solution {
public:
    int primeUptoN(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (long long p = 2; p <= sqrt(n); p++) {
            if (isPrime[p]) {
                for (long long m = p * p; m <= n; m += p)
                    isPrime[m] = false;
            }
        }

        int count = 0;
        bool printedFirst = false;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                if (!printedFirst) {
                    cout << i;          // print first prime without space
                    printedFirst = true;
                } else {
                    cout << " " << i;   // print others with space
                }
                count++;
            }
        }
        cout << "\n";
        return count;
    }
};
