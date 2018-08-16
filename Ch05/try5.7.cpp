#include "std_lib_facilities.h"

int main()
{
    vector<double>temps;

    for (double temp; cin>>temp;)
        temps.push_back(temp);

    double sum = 0;
    double hight_temp = DBL_MIN;
    double low_temp = DBL_MAX;

    for (int x : temps) {

        if (x>hight_temp)hight_temp = x;
        if (x<low_temp)low_temp = x;
        sum += x;
    }

    cout << "High temperature: " << hight_temp << '\n'
        << "Low temperature: " << low_temp << '\n'
        << "Average temperature: " << sum/temps.size() << '\n';

}