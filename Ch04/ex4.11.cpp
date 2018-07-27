#include "std_lib_facilities.h"

vector<int> primes;

bool is_prime(int n)
{
    for(int i=0;i<primes.size();++i)
        if (n%primes[i]==0) {
            return false;
        }
    return true;
}

int main()
{
    primes.push_back(2);
    for (int i = 3; i<100; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    
    for (int i = 0; i<primes.size(); ++i)
        cout << primes[i] << ' ';
    cout << '\n';
}