/*4.132 Поезд прибывает на станцию в a часов b минут и отправляется в c часов d минут. 
Пассажир пришел на платформу в n часов m минут. Будет ли поезд стоять на платформе? 
Числа a,b,c,d,n,m— целые, 0<a<=23, 0<b<=59, 0<c<=23, 0<d<=59, 0<n<=23, 0<m<= 59.*/


#include <iostream>
#include <cmath>

using namespace std;

int main() {
int m,n,a,b,c,d;
cin>>a>>b>>c>>d>>n>>m;
    if(n == a && b <= m) {
        cout<<"pass is not late";
    } else if(n == c && m <= d)  {
        cout<<"pass is not late";
    } else if (a < n && n < c) {
        cout<<"pass is not late";
    }  else {
        cout<<"pass is late";
    }

}