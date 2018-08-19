#include "std_lib_facilities.h"

int main()
{
    constexpr double mile_per_km = 1.609;
    cout << "Please enter a digit\n";
    double digit;
    cin >> digit;

    if (!cin) error("something went bad with the read");

    cout << digit << " mile == " << mile_per_km*digit << " km\n";
}
