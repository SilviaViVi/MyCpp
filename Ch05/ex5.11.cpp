#include "std_lib_facilities.h"

int main()
{
    int a = 1, b = 2;
    while (a<b) {
        int c = a+b;
        a = b;
        b = c;
    }
    cout<<a<<'\n';
}