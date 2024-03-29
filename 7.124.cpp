/* 7.124. Даны 20 чисел, образующие неубывающую последовательность. Несколько
чисел, идущие подряд, равны между собой. Найти количество таких чисел.
Сколько различных чисел имеется в последовательности? */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
int i=0,num=0, sec=0, equal=0, not_equal=0;
cin >> num;
    for(i = 1; i < 6; i++) {
    sec = num;
    cin >> num;
        if(num == sec){
            equal++;
        } else {
            if(not_equal==0){
            not_equal+=2;
            } else {
            not_equal++;
            }
        }
    
    }
    cout << equal << endl;
    cout << not_equal << endl;
}
// 1  sec = 1
// 1 2 // 2
// sec = 2
// 2 2  // 1
// sec = 2
// 2 3   // 3
// sec = 3
// 3 4   //4
//sec = 4
// 4 5