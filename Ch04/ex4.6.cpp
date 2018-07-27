#include "std_lib_facilities.h"

int main()
{
    vector<string> v = {"zero", "one", "two", "therr", "four", "five", "six", "seven", "eight", "nine"};
    vector<int> n = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int val;
    string s;
    cin >> val;
    if (!cin) {
        cin.clear();
        cin >> s;
        for (int i = 0; i<v.size(); ++i) {

            if (s==v[i]) {
                cout <<n[i];
            }
        }
    }
    else {
        for (int i = 0; i<v.size(); ++i) {

            if (val==n[i]) {
                cout <<v[i];
            }
        }
    }

    return 0;
}