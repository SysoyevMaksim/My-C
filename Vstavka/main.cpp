#include <iostream>
#include <string>

using namespace std;


int main() {

    string str, subStr;
    int position;

    cout
        << "Please, enter a sting: ";
    getline(cin, str);
    cout
        << "Please, etner a substring: ";
    getline(cin, subStr);

    cout
        << "Please, enter a value of position: ";
    cin
        >> position;

    if (position > str.size()) {

        cout
            << "The value of position more then size of the string!";

        system("PAUSE");
        return EXIT_FAILURE;

    } else {

        str.insert(position, subStr);

    }

    cout
        << "Result: "
        << str;

    system("PAUSE");
    return EXIT_SUCCESS;

}
