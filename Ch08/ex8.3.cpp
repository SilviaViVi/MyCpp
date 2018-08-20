#include "std_lib_facilities.h"

void print(const string& tok, const vector<int>& v)
{
    cout<<tok;
    for (auto i : v) {
        cout<<i<<' ';
    }
    cout<<'\n';
}

void fibonacci(int x, int y, vector<int>& v, int n)
{
    if (n<2) {
        error("at least 2 numbers needed");
    }
    v.push_back(x);
    v.push_back(y);
    int z = 0;
    while (n-2>0) {
        z = x + y;
        x = y;
        y = z;
        v.push_back(z);
        --n;
    }
}

int main()
{
    int x = 0;
    int y = 0;
    int n = 0;
    cout << " Enter three numbers." << '\n';
    cin >> x;
    cin >> y;
    cin >> n;

    vector<int> v;
    fibonacci(x, y, v, n);

    print("my vector", v);
}