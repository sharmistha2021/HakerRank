#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int n, x, pos, pos1, pos2, size;
    vector <int> v;
    vector <int>::iterator it;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    cin >> pos >> pos1 >> pos2;
    v.erase(v.begin() + pos - 1);

    v.erase(v.begin() + pos1 - 1, v.begin() + pos2 - 1);
    size = v.size();
    cout << size << endl;
    for(it = v.begin(); it < v.end(); it++){
      cout << *it << " ";
    }


    return 0;
}
