#include "std_lib_facilities.h"

int main()
{
    vector<double> v;
    double sum = 0.0;
    double max = DBL_MIN, min = DBL_MAX;

    for (double val; cin >> val;) {
        v.push_back(val);
        sum += val;

        if (val<min) {
            min = val;
         }
        if (max<val) {
            max = val;
        }
         }

    cout << "All=" << sum <<'\n'<< "Average=" << sum/v.size() << '\n'
        << "max="<< max << "  min=" << min << '\n';

    return 0;

}