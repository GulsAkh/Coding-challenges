#include <iostream>
#include <cmath>

using namespace std;

int main() {
int n, a, b, c, d;
cin>>n;

a = n % 10;
b = n / 10 % 10;
c = n / 100 % 10;
d = n / 1000 % 10;

    if(a == d && b == c){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}