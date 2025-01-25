#include <iostream>
using namespace std;

// Define class named rubberduck
class rubberduck {
public:
    string phrase = "Rubberducky!";
    void printMessage() {
        cout << phrase << endl;
    }
};

// Main function
int main() {
    rubberduck obj;
    obj.printMessage();

    return 0;
}
