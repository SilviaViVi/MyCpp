#include "std_lib_facilities.h"

int main()
{
    double val;
    double min = DBL_MAX;
    double max = DBL_MIN;

    while (cin>>val) {
        if (val<min) {
            min = val;
            cout << min <<" the min is so far\n";
        }
        if (val>max) {
            max = val;
            cout << max <<" the max is so far\n";
        }
    }
}