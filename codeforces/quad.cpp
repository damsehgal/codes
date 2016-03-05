#include <bits/stdc++.h>
using namespace std;
int main() {

    float a, b, c, x1, x2, d;
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        if(x1>x2)cout<<setprecision(12)<<fixed <<x1 << endl<<x2;
        else cout<<setprecision(12)<<fixed <<x2 << endl<<x1;
    }
    return 0;
}