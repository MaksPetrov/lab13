#include <iostream>

using namespace std;

int main()
{
    int n, a, d;
    cin >> n >> a >> d;
    int arr[n], s = 1;
    for(int i = 0; i<n; i += 1)
    {
        arr[i] = a*s;
        s *= d;
    }
    for(int i = 0; i<n; i += 1)
    {
        cout << arr[i] << " ";
    }
}
