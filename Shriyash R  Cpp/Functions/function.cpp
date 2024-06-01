#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

// pass by value
void PassByValue(int n)
{
    n += 5;
    cout << n << endl;
    n += 5;
    cout << n << endl;
    n += 5;
    cout << n << endl;
}

void PassByRef(string s)
{
    s[0] += 'r';
    cout << s << endl;
}

int main()
{

    int a = 10;
    int v = 10;

    cout << "Answer : " << sum(a, v) << endl;

    PassByValue(a);
    cout << a << endl;

    string s = "Shri";
    PassByRef(s);
    cout << s << endl;

    return 0;
}