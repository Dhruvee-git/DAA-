#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "HELLO";
    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    cout << "Lowercase string: " << str << endl;
    return 0;
}

