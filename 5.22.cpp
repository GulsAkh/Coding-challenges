/* 5.22. Напечатать таблицу стоимости 100, 200, 300, ...,2000г конфет 
(стоимость 1 кг конфет вводится с клавиатуры).*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

int i, n = 0;
cin >> n;
    for(i = 100; i <= 2000; i+= 100) {
        cout << n / i << endl;
    }
}