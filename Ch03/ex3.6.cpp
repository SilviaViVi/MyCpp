#include "std_lib_facilities.h"

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Please enter therr numbers." << '\n';
    cin >> a >> b >> c;

    if (!cin) error("something went bad with the read");

    int s = 0;
    int m = 0;
    int l = 0;

    if (a<=b && a<=c) {
        s = a;
        if (b<=c) {
            m = b;
            l = c;
        }
        else {
            m = c;
            l = b;
        }
    }

    else if (b<=a && b<=c) {
        s = b;
        if (a<=c) {
            m = a;
            l = c;
        }
        else {
            m = c;
            l = a;
        }
    }

    else {
        s = c;
        if (a <= b) {
            m = a;
            l = b;
        }
        else {
            m = b;
            l = a;
        }
    }

    cout << s <<',' << m << ',' << l <<'\n';
        

    return 0;

}