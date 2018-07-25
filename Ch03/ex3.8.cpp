#include "std_lib_facilities.h"

int main()
{
    cout << " Enter a digit.";
    int digit;
    cin >> digit;
    if (digit%2==0) {
        cout << "The value "<<digit <<" is an even number.\n";
    }
    else {
        cout << "The value "<<digit <<" is an odd number.\n";
    }
    return 0;
}