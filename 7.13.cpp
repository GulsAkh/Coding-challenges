/* 7.13. Дано натуральное число.
а) Получить все его делители.
б) Найти сумму его делителей.
в) Найти сумму его четных делителей.
г) Определить количество его делителей.
д) Определить количество его нечетных делителей.
е) Определить количество его делителей. Сколько из них четных?
ж) Найти количество его делителей, больших d.
*/

#include <iostream>
#include <cmath>

using namespace std;

/* A)
int main() {
int i, n;
cin >> n;
    for (i = 1; i <= n; i++) {
        if(n%i == 0) {
            cout << i << endl;
        }
    }
}
*/

/* Б)
int main() {
int i, n, sum=0;
cin >> n;
    for (i = 1; i <= n; i++) {
        if(n%i == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
}
*/

/* В)
int main() {
int i, n, sum=0;
cin >> n;
    for (i = 1; i <= n; i++) {
        if(n%i == 0 && i%2 == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
}
*/
 
/* Г)
int main() {
int i, n, sum=0;
cin >> n;
    for (i = 1; i <= n; i++) {
        if(n%i == 0) {
            sum++;
        }
    }
    cout << sum << endl;
}
*/

/* Д)
int main() {
int i, n, sum=0;
cin >> n;
    for (i = 1; i <= n; i++) {
        if(n%i == 0 && i%2 == 1) {
            sum++;
        }
    }
    cout << sum << endl;
}
*/

// Е)
int main() { 
int i, n, even=0, sum=0;
cin >> n;
    for (i = 1; i <= n; i++) {
        if(n%i == 0) {
            if(i%2 == 0) {
                even++;
            }
            sum++;
        }
    }
    cout << sum << endl;
    cout << even << endl;
}