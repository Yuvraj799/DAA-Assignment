#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; ++i)
        cin >> arr[i];
    int n;
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; ++i)
        cin >> arr2[i];
    int i, j;
    i = j = 0;
    while (i != m && j != n)
    {
        if (arr[i] == arr2[j])
        {
            cout << arr[i++] << " ";
            j++;
        }
        else if (arr[i] < arr2[j])
            ++i;
        else
            j++;
    }
    return 0;
}
