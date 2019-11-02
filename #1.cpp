#include <iostream>

using namespace std;

int main()
{
    int n, s = 1;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i += 1)
    {
        a[i] = s;
        s += 2;
    }
    for(int i = 0; i<n; i += 1)
    {
        cout << a[i] << " ";
    }
}
