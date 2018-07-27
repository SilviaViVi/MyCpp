#include "std_lib_facilities.h"
int main()
{
    cout<<"Enter words.\n";
    vector<string> ws;
    for (string words; cin>>words;)
        ws.push_back(words);

    string dislike = "hate";
    for (int i = 0; i<ws.size(); ++i) {
        if (ws[i]==dislike) {
            ws[i] = "BLEEP";
        }
        cout<<ws[i]<<'\n';
    }

    return 0;

}