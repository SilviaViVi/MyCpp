#include "std_lib_facilities.h"

int main()
{
    constexpr double m_per_cm = 100.0;
    constexpr double in_per_cm = 2.54;
    constexpr double ft_per_cm = 12.0*in_per_cm;

    double val;
    string unit;
    double max = DBL_MIN, min = DBL_MAX;
    int count = 0;
    double sum = 0.0;
    vector<double> v;

    while (cin >> val >> unit) {
        ++count;

        if (unit=="cm") {
            ;
        }
        else if (unit=="m") {
            val *= m_per_cm;
        }
        else if (unit=="in") {
            val *= in_per_cm;
        }
        else if (unit=="ft") {
            val *= ft_per_cm;
        }
        else {
            error("unkown unit");
        }
        cout << val << "cm\n";

        if (val<min) {
            min = val;
        }
        if (max<val) {
            max = val;
        }

        sum += val;

        v.push_back(val);
    }

    cout << "max=" << max << " min=" << min
        << " sum=" << sum << " count=" << count << '\n';

    sort(v);

    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << '\n';

    return 0;
}