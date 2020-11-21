#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;
int main() {

    int n, value;
    string str;
    cin >> str;
    string change;
    map<string, int> m;
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);

        value = ++m[change];
        m.insert(make_pair(change, value));
    }
    int max = 0;
    string alpha;
    for (auto i = m.begin(); i != m.end(); ++i)
    {
        if (max < i->second)
        {
            max = i->second;
            alpha = i->first;
        }
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        if (max == i->second && alpha != i->first) cout << "?" << endl;
    }
    cout << alpha << endl;
}


