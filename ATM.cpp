
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    float b;
    cin >> a >> b;
    
    if ((a%5==0) && (b-a-0.5>=0))
    {
        cout << fixed <<setprecision(2)<< b-a-0.5 << endl;
    }
    else
    {
        cout << fixed<<setprecision(2) << b << endl;
    }

    return 0;
}
