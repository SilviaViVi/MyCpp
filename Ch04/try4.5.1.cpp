#include "std_lib_facilities.h"

int square(int x)
{
    int sum = 0;
    for (int i = 0; i < x; ++i) sum += x;
    return sum;
}

int main()
{
    cout << square(2) << '\n';
    cout << square(10) << '\n';
}
