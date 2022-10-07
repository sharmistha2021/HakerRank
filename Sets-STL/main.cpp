#include <iostream>
#include <set>
#include <iterator>
#include <stdio.h>

using namespace std;

int main()
{
    int i, n, x, y;
    set<int>s;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> y >> x;
        if(y == 1) s.insert(x);
        else if(y == 2) s.erase(x);
        else{
            if(s.end() == s.find(x)) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
    return 0;
}
