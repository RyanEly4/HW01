#include <iostream>
using namespace std;

// Define class named rubberduck, method outputs a message
class rubberduck {
public:
    string phrase = "Rubberducky!";
    void printMessage() {
        cout << phrase << endl;
    }
};

// Main function, uses class rubberduck
int main() {
    rubberduck obj;
    obj.printMessage();

    return 0;
}
