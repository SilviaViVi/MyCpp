#include "std_lib_facilities.h"

int main()
{
    double val1, val2;
    while (cin>>val1>>val2) {
        cout << val1<<" "<< val2<<'\n';

        constexpr double diff = 1.0/100;

        if (val1>val2) {
            cout << "the s value is " <<val2<<'\n';
            cout << "the l value is " <<val1<<'\n';
            if (val1-val2 < diff) {
                cout << "almost equal";
            }
        }
        else if (val1<val2) {
            cout << "the s value is " <<val1<<'\n';
            cout << "the l value is " <<val2<<'\n';
            if (val2-val1 < diff) {
                cout << "almost equal";
            }
        }
        else {
            cout <<" equal\n";
        }
    }

    return 0;
}