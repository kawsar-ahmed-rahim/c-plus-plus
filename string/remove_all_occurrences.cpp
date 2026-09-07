//! strfind();
//! str.erase(start,end)

#include <iostream>
#include <string>

using namespace std;

string removeOccurrences(string s, string part) {

    while (s.length() > 0 && s.find(part) < s.length()) {

        s.erase(s.find(part), part.length());
    }

    return s;
}

int main() {

    string s, part;

    cin >> s;
    cin >> part;

    string result = removeOccurrences(s, part);

    cout << result << endl;

    return 0;
}