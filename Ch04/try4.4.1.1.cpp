#include "std_lib_facilities.h"

int main()
{
    constexpr double j_per = 0.01, e_per = 1.17, g_per = 1.32;
    cout << " Enter a digit followed by a unit(J or O or G):\n";
    double digit;
    char unit;
    cin >> digit >> unit;
    if (unit=='J') {
        cout << "J == " << j_per*digit << "D\n";
    }
    else if (unit=='O') {
        cout << "O == " << e_per*digit << "D\n";
    }
    else if (unit=='G') {
        cout << "G == " << g_per*digit << "D\n";
    }
    else {
        cout << "unknown unit\n";
    }
    return 0;
}