#include "std_lib_facilities.h"

int main()
{
    for (char ch = '0'; ch<='9'; ++ch)
        cout << ch << '\t' << int{ch} << '\n';

    for (char ch = 'A'; ch<='Z'; ++ch)
        cout << ch << '\t' << int{ch} << '\n';
}