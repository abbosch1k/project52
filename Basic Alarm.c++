#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Waiting...\n";
    this_thread::sleep_for(chrono::seconds(5));
    cout << "Alarm!";
}
