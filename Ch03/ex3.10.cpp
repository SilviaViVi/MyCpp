#include "std_lib_facilities.h"

int main()
{
    double val1, val2;
    string operation;
    cin >> operation >> val1 >> val2;
    if (operation=="+"){
        cout << val1+val2;
    }
    else if (operation=="-") {
        cout << val1-val2;
    } 
    else if (operation=="*") {
        cout << val1*val2;
    }
    else if (operation=="/") {
        if (val2==0) {
            error("divide by 0");
        }
        cout << val1/val2;
    }
    else {
        cout <<"Unkown.";
    }
    return 0;
}