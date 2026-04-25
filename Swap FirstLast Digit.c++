#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int last = n % 10;
    int first = n;

    while(first >= 10)
        first /= 10;

    cout << last << " ... " << first;
}
