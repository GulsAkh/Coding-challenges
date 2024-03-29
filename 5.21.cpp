/*5.21. Напечатать таблицу стоимости 50, 100, 150, ..., 1000 г сыра (стоимость 1 кг
сыра вводится с клавиатуры).*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

int i, n = 0;
cin >> n;
    for( i = 50; i <= 55; i++ ) {
        cout << i << " kg = " << i * n << " tg"<< endl;
    }
}