#include "std_lib_facilities.h"

int main()
{
    constexpr double j_per = 0.01, e_per = 1.17, g_per = 1.32;
    cout << " Enter a digit followed by a unit(J or O or G):\n";
    double digit;
    char unit;
    cin >> digit >> unit;
    switch (unit) {
        case'J':
            cout << "J == " << j_per*digit << "D\n";
            break;
        case'O':
            cout << "O == " << e_per*digit << "D\n";
            break;
        case'G':
            cout << "G == " << g_per*digit << "D\n";
            break;
        default:
            cout << "unknown unit\n";
            break;
    }
    return 0;
}