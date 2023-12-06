/* 4.141 В подъезде жилого дома имеется n квартир, пронумерованных подряд, на- чиная с номера a. Определить, является ли сумма номеров всех квартир четным числом. Формулу суммы членов арифметической прогрессии не использовать.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
int n, a, x;
cin>>a>>n;

if(a%2 == 0){
    //even
        x = n/2;
        if (x % 2 == 0){
            cout<<"EVEN";
        } else {
            cout<<"ODD";
        }
} else {
    //odd
        n = n - 1;
        x = n/2;
        if(x % 2 == 0){
            if(a % 2 == 0) {
                cout<<"EVEN";
            } else {
                cout<<"ODD";
            } 
        }else {
            if(a % 2 == 0){
                cout<<"ODD";
            } else {
                cout<<"EVEN";
            }
         }
    }  
}