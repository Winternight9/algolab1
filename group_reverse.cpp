#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{  
    size_t text;
    while (cin >> text, text > 0)
    {
        string s;
        cin >> s;

        string::iterator iter(s.begin());
        size_t groupSize = s.size() / text;

        for ( ; iter != s.end(); iter += groupSize)
            reverse(iter, iter + groupSize);

        cout << s << endl;
    }
}