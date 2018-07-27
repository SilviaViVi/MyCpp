#include "std_lib_facilities.h"

int main()
{
    double val1, val2;
    char symbol;
    while (cin >> val1 >> val2 >> symbol) {
        switch (symbol) {
        case'+':
            cout << "val1+val2=" << val1+val2 <<'\n';
            break;

        case'-':
            cout << "val1-val2=" << val1-val2 <<'\n';
            break;

        case'*':
            cout << "val1*val2=" << val1*val2 <<'\n';
            break;

        case'/':
            cout << "val1/val2=" << val1/val2 <<'\n';
            break;

        case'%':
            cout << "val1%va2=" << int(val1)%int(val2)<<'\n';
            break;

        default:
            cout <<" unknown\n";
            break;
        }
    }

    return 0;
}