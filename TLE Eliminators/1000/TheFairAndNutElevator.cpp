#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n+5];
    for(int i = 0 ; i  < n ; i++){
        cin >> array[i];
    }
    int count = 0;

    for(int i = 0 ; i < n ; i++){
        count = count + (4 * i * array[i]);
    }

    cout << count << endl;
    return 0;
}