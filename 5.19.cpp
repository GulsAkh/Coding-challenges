/* 5.19. Вывести "столбиком" значения sin 0,1 , sin 0, 2 , ..., sin1,1. */
#include <iostream>
#include <cmath>

using namespace std;

int main(){

double i=0;
    for(i = 0.1; i <= 1.1; i+=0.1){
        cout << sin(i)<< endl;
    }
}
//sin возвращает значение типа double