#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int c=0;
    for(char ch:s)
        if(ch==' ') c++;

    cout << c;
}
