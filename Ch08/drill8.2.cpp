#include "std_lib_facilities.h"

void swap_v(int a, int b)
{ 
    int temp;
    temp = a, a = b;
    b = temp;
}

void swap_r(int& a, int& b)
{
    int temp;
    temp = a, a = b;
    b = temp;
}
 
//void swap_cr(const int& a, const int& b)
//{
//    int temp;
//    temp = a, a = b;
//    b = temp;
//}

int main()
{
    int x = 7;
    int y = 9;
    swap_v(x, y);
    cout<<"swap_v x="<<x<<", y="<<y<<'\n';
    swap_r(x, y);
    cout<<"swap_r x="<<x<<", y="<<y<<'\n';
    swap_v(7, 9);
    //swap_r(7, 9);
}
