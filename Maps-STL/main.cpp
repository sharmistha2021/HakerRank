#include <iostream>
#include <stdio.h>
#include <map>
#include <string>
using namespace std;

int main()
{
    int no_querry, i, querry, mark;
    string name;
    map <string, int> m;
    cin >> no_querry;
    for(i = 0; i < no_querry; i++){
        cin >> querry >> name;
        switch(querry)
        {
        case 1:
            cin >> mark;
            m[name] += mark;
            break;
        case 2:
            m[name] = 0;
            break ;
        case 3:
            cout << m[name] << endl;
            break ;
        }

    }
    return 0;
}
