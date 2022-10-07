#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iterator>
#define long long int int
using namespace std;

int main()
{
    int n, i, x;
    vector <int> v;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);

    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}
