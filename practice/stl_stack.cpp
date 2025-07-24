#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    int z = s.empty();

    int y = s.size();

    int x = s.top();

    s.pop();

    cout << s.top() << endl;
}