#include "std_lib_facilities.h"

vector<int> primes;

bool is_prime(int n)
{
    for (int i = 0; i<primes.size(); ++i)
        if (n%primes[i]==0) {
            return false;
        }
    return true;
}

int main()
{
    int n = 0;
    cout << "Enter a number." <<'\n';
    cin >> n;

    if (n<=1) {
        error("n need >=2");
    }

    primes.push_back(2);
    for (int i = 3; i<=n; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }

    for (int i = 0; i<primes.size(); ++i)
        cout << primes[i] << ' ';
    cout << '\n';
}