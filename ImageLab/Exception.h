#include <iostream>
#include <string>
using namespace std;

class StackException {
    public:
        StackException(string s) : str(s) {}
        ~StackException() {}
        void what() {
            cout << str << endl;
        }

    private:
        string str;
};