/*5.31. Дано натуральное число n. Найти сумму n2 n 1 2 ... 2n 2*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, i, sum=0;
    cin >> n;
    for(i=0; i<n; i++){
        sum += ((n + i) * (n + i));
    }
    cout<<sum;
}
