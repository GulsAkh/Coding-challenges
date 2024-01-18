/*6.28. Дано натуральное число, в котором все цифры различны. 
Определить: 
а) порядковый номер его максимальной цифры, считая номера:
   от конца числа;
   от начала числа;
б) порядковый номер его минимальной цифры, считая номера:
   от конца числа; 
   от начала числа.*/

//miN, maX c конца числа
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i = 2, n=0, miN=0, maX=0, idmiN=1, idmaX=1;
    cin>>n;
    miN = n%10;
    maX = n%10;
    n /= 10;
    while(n != 0){
        if(n%10 < miN){
            miN = n%10;
            maX = maX;
            idmiN = i;
        }
        if(n%10 > maX){
            miN = miN;
            maX = n%10;
            idmaX = i;
        }
    i++;
    n /= 10;
    }
    cout<<"idmiN:"<<idmiN<<endl;
    cout<<"idmaX:"<<idmaX<<endl;
}   
//36712

//miN, maX от начала числа
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i = 0, n=0, x = 0, miN=0, maX=0, idmiN=0, idmaX=0;
    cin>>n;
    x = n;
    while(x != 0){
        i++;
        x /= 10;
    }
    miN = n%10;
    maX = n%10;
    idmiN = i;
    idmaX = i;
    i--;
    n /= 10;
    while(n != 0){
        if(n%10 < miN){
            miN = n%10;
            maX = maX;
            idmiN = i;
        }
        if(n%10 > maX){
            //7>6
            miN = miN;
            maX = n%10;
            idmaX = i;
        }
    i--;
    n /= 10;
    }
    cout<<"idmiN:"<<idmiN<<endl;
    cout<<"idmaX:"<<idmaX<<endl;
}   
//1756

