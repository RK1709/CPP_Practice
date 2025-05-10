#include <iostream>
#include <unistd.h> // for getpid()
using namespace std;

int main() {
    cout << "Hello from process with PID: " << getpid() << endl;
    while (true); // infinite loop to keep it running
    return 0;
}