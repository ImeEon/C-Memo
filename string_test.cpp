#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>

using namespace std;

int main() {
    string s = "abcde";

    string s_s = s.substr(1, 3);
    cout << s_s << endl;

    int idx = s.find("da");
    cout << idx << endl;

    string::size_type idx_1 = s.find('q');
    cout << idx << endl;
    cout << (idx==string::npos) << endl;
    cout << (idx==-1) << endl;

    s.append("w");
    s.insert(0, "2");
    cout << s.front() << s.back() << stoi(s) << s.compare("21") << s.length() << s.size() << endl;

    string s_2 = "qwert";
    s += s_2;
    cout << s;
    s.erase(0, 3);
    cout << endl << s << endl;
    return -1;
}