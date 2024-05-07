#include <iostream>
using namespace std;

/**
 * Repeats a given string a certain number of times with an optional separator.
 *
 * @brief Repeats a given string a certain number of times with an optional separator.
 *
 * @param count the number of times to repeat the string
 * @param str the string to be repeated
 * @param sep the optional separator character (default is ',')
 *
 * @return the concatenated string after repeating 'count' times with optional separator
 *
 * @throws None
 */
string repeat(int count, string str, char sep = ',')
{
    bool show_last_sep = true; // whether to show the last separator or not
    string result; // the final result string

    // ask the user if they want to hide the last separator
    cout << "do you want to hide the last separator (Y/N) ? ";
    char answer;
    cin >> answer;
    if (answer == 'Y')
    {
        show_last_sep = false; // if user wants to hide the last separator, set show_last_sep to false
    }

    for (int i = 0; i < count; ++i) // iterate 'count' times
    {
        result += str; // add the string to the result
        if (show_last_sep && i != count - 1) // if the user wants to show the last separator and we are not in the last iteration
        {
            result += sep; // add the separator
        }
    }

    return result; // return the final result
}
int main()
{
    cout << repeat(3, "Hi", '#') << endl;
    return 0;
}