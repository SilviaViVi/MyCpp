#include "std_lib_facilities.h"

int main()
{
    double val1, val2;
    char symbol;
    while (cin >> val1 >> val2 >> symbol) {
        if (symbol=='+') {
            cout << "val1+val2=" << val1+val2 <<'\n';

        }
        else if (symbol=='-') {
            cout << "val1-val2=" << val1-val2 <<'\n';

        }
         else if (symbol=='*') {
            cout << "val1*val2=" << val1*val2 <<'\n';

        }
        else if (symbol=='/') {
            cout << "val1/val2=" << val1/val2 <<'\n';

        }
        else if (symbol=='%') {
            cout << "val1%va2=" << int(val1)%int(val2)<<'\n';
        }
        else {
            cout <<" unknown\n";
        }

    }

    return 0;
}