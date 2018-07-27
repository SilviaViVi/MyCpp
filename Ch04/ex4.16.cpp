#include "std_lib_facilities.h"

int main()
{
    int val;
    int max = INT_MIN, min = INT_MAX;
    vector<pair<int, int>> v;

    while (cin >> val) {
        if (val<min) {
            min = val;
        }
        if (max<val) {
            max = val;
        }

        bool exist = false;
        for (auto& p : v) {
            if (val==p.first) {
                ++p.second;
                exist = true;
            }
        }
        if (!exist) {
            v.push_back({val, 1});
        }
    }

    int max_count = INT_MIN;
    int mode = 0;
    for (auto& p : v) {
        if (max_count<p.second) {
            max_count = p.second;
            mode = p.first;
        }
        //cout << "(" << p.first << "," << p.second << ")";
    }

    cout << "max=" << max << " min=" << min
        << " mode=" << mode << '\n';
    return 0;
}