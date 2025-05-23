#include <bits/stdc++.h>
#include <algorithm>
#define province name
#define mask m
#define protection p
#define alcohol al
#define gloves g
using namespace std;

struct Node
{
    string province;
    int mask, protection, alcohol, gloves;
}a[10];

bool cmp1(const Node &x, const Node &y)
{
    return x.m + x.p + x.al + x.g < y.m + y.p + y.al + y.g;
}

bool cmp2(const Node &x, const Node &y)
{
    if(x.m != y.m)
        return x.m < y.m;
    else if(x.p != y.p)
        return x.p < y.p;
    else if(x.al != y.al)
        return x.al < y.al;
    else
        return x.g < y.g;
}

int main()
{
    a[0] = {"内蒙古", 1000, 5000, 3400, 2200};
    a[1] = {"广西", 41000, 5038, 11400, 1350};
    a[2] = {"四川", 7000, 9000, 6600, 12200};
    a[3] = {"河南", 9750, 25000, 23400, 5500};
    a[4] = {"广东", 18730, 35000, 13880, 9800};
    a[5] = {"江苏", 12750, 19300, 20450, 7800};
    sort(a, a + 5, cmp1);
    for(int i = 0; i < 5; i++)
        cout << a[i].province << ' ';
    puts("");
    sort(a, a + 5, cmp2);
    for(int i = 0; i < 5; i++)
        cout << a[i].province << ' ';
    return 0;
}
