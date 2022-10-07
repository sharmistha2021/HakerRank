#include <iostream>
#include <vector>
#include <iterator>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n, no_q, q, x,i;
    vector <int> v;

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> no_q;
    for(i = 0; i < no_q; i++){
        cin >> q;
       if(binary_search(v.begin(), v.end(), q)){
        cout << "yes" << " ";
       }
       else
        cout << "NO" << " ";
       vector <int>:: iterator it = lower_bound(v.begin(), v.end(), q);
       cout << distance(v.begin(), it) + 1 << endl;
    }

    return 0;
}
