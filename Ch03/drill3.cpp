#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name<<",\n"
        <<"  How are you? I am fine. I hate you.\n";

    cout << "Enter a hate person\n";
    string hate_name;
    cin >> hate_name;
    cout << " Have you seen "<<first_name<<" lately?\n";

    cout << "Enter m or f\n";
    char sex = 0;
    cin >> sex;
    if (sex=='m') {
        cout<<"If you see "<<hate_name<<" please ask him to call me.\n";
    }
    if (sex=='f') {
        cout<<"If you see "<<hate_name<<" please ask her to call me.\n";
    }

    cout <<"To enter the age of the recipient\n";
    int age;
    cin >> age;
    cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
    if (age<=0 || age>=100) simple_error("you're kidding\n");

    if (age<12) {
        cout<<"Next year you will be "<<age+1;
    }
    else if (age==17) {
        cout<<"Next year you will be able to vote.";
    }
    else if (age>70) {
        cout<<"I hope you are enjoying retirement.";
    }

    cout<<"\nYours sincerely,\n\n"
        <<"Dan"<<endl;
    return 0;
}