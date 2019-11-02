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
    int j = 0, m = n-1;
    for(int i = 0; i<n; i += 1)
    {
        if(i%2==0)
        {
            cout << a[j] << " ";
            j += 1;
        }
        else
        {
            cout << a[m] << " ";
            m -= 1;
        }
    }
}
