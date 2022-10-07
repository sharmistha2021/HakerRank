#include <iostream>

using namespace std;

int main()
{
    char s;
    string a;
    cin >> a;
    string b;
    cin >> b;
    int lena = a.size();
    int lenb = b.size();
    cout << lena << " " << lenb << "\n" << a + b << endl;
    s = a[0];
    a[0] = b[0];
    b[0] = s;
    cout << a + " "  + b << endl;

    return 0;
}
