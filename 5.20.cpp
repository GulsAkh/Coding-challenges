/* 5.20. Вывести "столбиком" значения 0,1,0,2, ...,0,9 .*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
double i = 0;
    for(i = 0.1; i < 0.9; i += 0.1) {
        cout << sqrt(i) << endl;
    }
}