#include "std_lib_facilities.h"

int main()
{
    cout << " please enter two nmbers.\n";
    int val1, val2;
    cin >> val1 >> val2;

    if (val1<val2)
        cout << "smaller one is "<< val1 <<'\n';
    else if (val2<val1)
        cout << "smaller one is "<< val2 <<'\n';
    else
        cout << "equal\n";

    cout<< "sum = " << val1+val2 <<'\n'
        << "difference(val1-val2) = " << val1-val2 << '\n'
        << "product = " << val1*val2 <<'\n';

    if (val2==0)
        cout << "divide by 0\n";
    else
        cout<<"ration(val1/val2) = "<<val1/val2<<'\n';

    return 0;
}
