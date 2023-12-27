/*Дана непустая последовательность неотрицательных целых чисел, оканчи- вающаяся отрицательным числом. 
Найти среднее арифметическое всех чисел последовательности (без учета отрицательного числа).*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float i = 0, n = 0, x = 0;
    float aver = 0;
    cin>>i;
    while(i > 0){
    n += i;
    x++;
    cin>>i;       
    }
    aver = n / x;
    cout<<aver<<" ";  
}  


