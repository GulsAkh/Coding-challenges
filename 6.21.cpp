/*6.21. Последовательность Фибоначчи образуется так: первый и второй члены по- следовательности равны 1, 
каждый следующий равен сумме двух предыду- щих (1, 1, 2, 3, 5, 8, 13, ...). Найти:
а) первое число в последовательности Фибоначчи, большее n (значение n вво- дится с клавиатуры; n > 1);
б) сумму всех чисел в последовательности Фибоначчи, которые не превосхо- дят 1000.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a = 0, b = 1, c=0, n;
    cin>>n;
    while(c <= n){
    c = a + b;
    //0+1=1; 1+0=1; 1+1=2; 2+1=3; 3+2=5;
    b = a;
    //0, 1, 1, 2, 3
    a = c;
    //1, 1, 2, 3, 5
    //cout<<c<<",";
    }
    cout<<c;
}

//.   b a a+b
//1 1 2  3  5  8  13

_____________________________________________

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a=0, b=1, c=0, num=1;
    while(num < 1000){
    c = a + b;
    b = a;
    a = c;
    num += c;
    }
    cout<<num-c;
}
