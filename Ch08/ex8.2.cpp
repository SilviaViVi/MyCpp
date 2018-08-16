#include "std_lib_facilities.h"

void print(const string& tok, const vector<int>& v)
{
    cout<<tok;
    for (auto i : v) {
        cout<<i<<' ';
    }
    cout<<'\n';
}

int main()
{
    vector<int> v{1, 2, 3, 4};
    print("my vector", v);
}