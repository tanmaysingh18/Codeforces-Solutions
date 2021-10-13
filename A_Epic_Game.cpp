#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    while (true)
    {
        n -= gcd(a, n);
        if (n == 0)
        {
            cout << 0 << endl;
            break;
        }
        n -= gcd(b, n);
        if (n == 0)
        {
            cout << 1 << endl;
            break;
        }
    }
    return 0;
}