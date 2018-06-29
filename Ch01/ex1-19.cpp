#include <iostream>

int main()
{
    int lhs = 0;
    int rhs = 0;
    if (std::cin >> lhs >> rhs) {
        if (rhs > lhs) {
            int temp = lhs;
            lhs = rhs;
            rhs = temp;
        }
        while (lhs >= rhs) {
            std::cout << lhs << std::endl;
            --lhs;
        }
    }
    return 0;
}