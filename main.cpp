#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;

    string str;
    cout << "Please enter something: ";
    cin >> str;

    int length = str.length();
    if (length % 2 != 0) length--;

    bool palindrome = true;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i])
        {
            palindrome = false;
            break;
        }
    }

    cout << "You entered something ";
    if (!palindrome) cout << "not ";
    cout << "palindrome!" << endl;

    return 0;
}
