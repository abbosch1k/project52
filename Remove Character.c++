#include <iostream>
using namespace std;

int main() {
    string s="banana";
    char target='a';

    for(char c:s)
        if(c!=target)
            cout<<c;
}
