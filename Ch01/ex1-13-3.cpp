#include <iostream>

int main()
{
    std::cout << "Enter two number:" << std::endl;
    
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    for (; v1 <= v2; ++v1) {
        std::cout << v1 << std::endl;
    }

    return 0;
}