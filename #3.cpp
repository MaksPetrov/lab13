#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int arr[n], s = a+b;
    arr[0] = a, arr[1] = b;
    for(int i = 2; i<n; i += 1)
    {
        arr[i] = s;
        s += arr[i];
    }
    for(int i = 0; i<n; i += 1)
    {
        cout << arr[i] << " ";
    }
}
