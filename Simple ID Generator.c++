#include <iostream>
using namespace std;

int main() {
    static int id = 1;

    cout << "User ID: " << id++;
}
