/*5.89. Вычислить сумму 1!+2!+3!+...+n!, k!=1*2*3 ...*k (значение n вводится
с клавиатуры; 1<n<=10)*/

//It is my solution
#include <iostream>
#include <cmath>

using namespace std;

int main() {
int sum=1, n, i=0;
cin >> n;
    for( i = 0; i < n; i++ ) {
        sum *= (n-i);

    }
    cout << sum << endl;
}

//It is tutor's one.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
int sum=1, n, i=1, num=0;
cin >> n;
    for( i = 1; i <= n; i++ ) {
        sum *= i;
        num+= sum;
    }
    cout << num << endl;
}