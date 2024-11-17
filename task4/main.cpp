#include <iostream>
#include <string>
#include <algorithm>

//浅浅using一下
using namespace std;


//去除前导0
void remove_leading_zero(string& s) {
    string::size_type i = 0;
    while (i < s.size() && s[i] == '0') {
        i++;
    }
    s = s.substr(i);
}

//将操作抽象成一个函数
void process(string& s, string::size_type dot) {
    string part1 = s.substr(0, dot);
    string part2 = s.substr(dot + 1);
    reverse(part1.begin(), part1.end());
    reverse(part2.begin(), part2.end());
    remove_leading_zero(part1);
    remove_leading_zero(part2);
    switch (s[dot])
    {
    case '.':
        s = part1 + "." + part2;
        break;

    case '/':
        s = part1 + "/" + part2;
        break;

    case '%':
        s = part1 + "%";
        break;

    default:
        break;
    }
}



int main() {
    string s;
    cin >> s;

    string::size_type dot = s.find('.');
    string::size_type slash = s.find('/');
    string::size_type percent_sign = s.find('%');

    if (dot != string::npos)
    {
        process(s, dot);

    }
    else if (slash != string::npos)
    {
        process(s, slash);
    }
    else if (percent_sign != string::npos)
    {
        process(s, percent_sign);
    }
    else
    {
        reverse(s.begin(), s.end());
        remove_leading_zero(s);
    }

    cout << s << endl;
    return 0;
}