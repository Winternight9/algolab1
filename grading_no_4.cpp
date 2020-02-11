#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    regex r("\"");
    string firstchar("``");
    string secondchar("''");
    bool checkposition = true;
    string st;

    while (getline(cin, st))
    {
        while (regex_search(st, r))
        {
            if (checkposition)
            {
                st = regex_replace(st, r, firstchar, regex_constants::format_first_only);
            }
            else
            {
                st = regex_replace(st, r, secondchar, regex_constants::format_first_only);
            }

            checkposition = !checkposition;
        }
        cout << st << endl;
    }
}