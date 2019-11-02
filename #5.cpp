#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
    }
    for(int i = 1; i<n; i += 2)
    {
        cout << a[i] << " ";
    }
    if((n-1)%2==0)
    {
        for(int i = n-1; i>=0; i -= 2)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        for(int i = n-2; i>=0; i -= 2)
        {
            cout << a[i] << " ";
        }
    }
}
