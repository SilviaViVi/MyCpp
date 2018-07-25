#include "std_lib_facilities.h"

int main()
{
    char ch = 'a';
    while (ch<='z') {
        cout << ch << '\t' << int{ch} << '\n';
        ++ch;
    }
}