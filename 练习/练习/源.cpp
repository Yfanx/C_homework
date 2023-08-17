#include<iostream>
#include<algorithm>
using namespace std;
int main() 
    {
    int n, i, j, t = 0;
    int a[100] = {0};
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; n++)
    {
        for (j = 0; j < i-1; j++)
        {
            if (a[j] < a[i])
                t++;
        }
        cout << t << " ";
        t = 0;
    }
    return 0;
}