/*5.39. Даны числа a1, a2, ..a10. Определить их сумму.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
int n, sum, i=0;

    for (i=1; i <= 10; i++) {
        cin >> n;
        cout << sum << "+" << n << "=" << sum+n << endl;
        sum += n;
       
       
    }
    cout << sum << endl;
}

//почему s без инициализации равно 1