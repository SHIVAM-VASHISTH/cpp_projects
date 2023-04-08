#include <iostream>
#include <cstring>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "nitIN", newStr = "";
    string::reverse_iterator it;

    for (it = str.rbegin(); it != str.rend(); it++) {
        newStr += *it;
    }

    cout << "Compare " << str.compare(newStr) << endl;

    if (str.compare(newStr) == 0 || str.compare(newStr) == -32 || str.compare(newStr) == 32) cout << "it is a palindrome";
    else cout << "It is not a palindrome";

    return 0;
}
