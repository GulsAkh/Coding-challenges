/* 7.53. Даны натуральное число n и целые числа a1, a2, ..., an Найти:
а) номер максимального из чисел ai. Если чисел с максимальным значением
несколько, то должен быть найден номер последнего из них;
б) номер минимального из чисел ai. Если чисел с минимальным значением
несколько, то должен быть найден номер первого из них. */

#include <iostream>
#include <cmath>

using namespace std;

/* A)
int main() {
int i=0, n=0, a=0, id=0, maX=0;
cin >> n;
    for(i = 1; i <= n; i++) {
    cin >> a;
        if(a >= maX) {
            maX = a;
            id = i;
        }
    }
    cout << id << endl;
}
*/

// Б)
int main() {
int i=0, n=0, a=0, id=1, miN=0;
cin >> n;
cin >> a;
miN = a;
    for(i = 2; i <= n; i++) {
    cin >> a;
        if(a < miN) {
            miN = a;
            id = i;
        }
    }
    cout << miN << endl;
    cout << id << endl;
}