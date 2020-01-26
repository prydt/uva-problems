#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, i = 1;
    int a[] = {0, 0, 0};

    scanf("%d", &k);
    while(k--)
    {
        scanf("%d %d %d", a, a+1, a+2);

        vector<int> vec(a, a+3);
        sort(vec.begin(), vec.end());

        printf("Case %d: %d\n", i++, vec[1]);
    }
}
